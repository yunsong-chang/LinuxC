#define Buffer ((char *)*(int far *)0x200)

main()
{
	Buffer=(char *)malloc(20);
	Buffer[10]=0;
	while(Buffer[10]!=8)
	{
		Buffer[Buffer[10]]='a'+Buffer[10];
		Buffer[10]++;
	}
	free(Buffer);
}

/* 安全内存0:200保存malloc(20)分配的地址
PUSH	BP
MOV		BP,SP
MOV		AX,0014
PUSH	AX
CALL	04EB		// malloc(20)
POP		CX

XOR		BX,BX
MOV		ES,BX
MOV		BX,0200
ES:
MOV		[BX],AX		// AX是malloc()的返回值
XOR		BX,BX		
MOV		ES,BX
MOV		BX,0200
ES:
MOV		BX,[BX]
MOV		BYTE PTR [BX+0A],00		// Buffer[10]=0;
JMP		s1						// while(Buffer[10]!=8)
s2: XOR		BX,BX
MOV		ES,BX
MOV		BX,0200
ES:
MOV		BX,[BX]
MOV		AL,[BX+0A]			// al = 读Buffer[10]
ADD		AL,61				// al = 'a'+Buffer[10]
XOR		BX,BX
MOV		ES,BX
MOV		BX,0200
ES:
MOV		BX,[BX]
PUSH	AX
PUSH	BX
XOR		BX,BX
MOV		ES,BX
MOV		BX,0200
ES:
MOV		BX,[BX]
MOV		AL,[BX+0A]		// al = 读Buffer[10]
CBW
POP		BX
ADD		BX,AX 			// Buffer[Buffer[10]]
POP		AX
MOV		[BX],AL 		// Buffer[Buffer[10]] = 'a'+Buffer[10]
XOR		BX,BX
MOV		ES,BX
MOV		BX,0200
ES:
MOV		BX,[BX]
INC		BYTE PTR [BX+0A]	//Buffer[10]++;
s1:XOR		BX,BX			//while(Buffer[10]!=8)
MOV		ES,BX
MOV		BX,0200
ES:
MOV		BX,[BX]
CMP		BYTE PTR [BX+0A],08
JNZ		s2

XOR		BX,BX
MOV		ES,BX
MOV		BX,0200
ES:
PUSH	[BX]
CALL	06EB			// free(Buffer);
POP		CX

POP		BP
RET
*/
