void showchar(int, int, ...);

main()
{
	showchar(8,2,'a','b','c','d','e','f','g','h');
}

void showchar(int n, int color, ...)
{
	int a;

	for(a=0;a!=n;a++)
	{
		*(char far *)(0xb8000000+160*10+80+a+a)=*(int *)(_BP+8+a+a); 	// BP, IP, 8, 2, 'a'(+8)
		*(char far *)(0xb8000000+160*10+81+a+a)=color;
	}
}


/*
main()
------------------------------------
PUSH	BP
MOV		BP,SP
MOV		AX,0068
PUSH	AX
MOV		AX,0067
PUSH	AX
....
MOV		AX,0061
PUSH	AX
MOV		AX,0002		// push 9次
PUSH	AX
MOV		AX,0008		// push 10次
PUSH	AX
CALL	022D		// showchar 
ADD		SP,+14		// call前push10次，调用者平衡堆栈
POP		BP
RET

showchar()
------------------------------------
PUSH	BP
MOV		BP,SP
PUSH	SI
XOR		SI,SI
JMP		s2
s1:MOV		BX,BP
ADD		BX,SI
ADD		BX,SI
ADD		BX,+08
MOV		AL,[BX]
PUSH	AX
MOV		AX,SI
CWD
PUSH	DX
PUSH	AX
MOV		AX,SI
CWD
POP		BX
POP		CX
ADD		BX,AX
ADC 	CX,DX
ADD		BX,0690
ADC		CX,B800
MOV		ES,CX
POP		AX
ES:
MOV		[BX],AL
MOV		AL,[BP+06]		// 字符属性2
PUSH	AX
MOV		AX,SI
CWD
PUSH	DX
PUSH	AX
MOV		AX,SI
CWD
POP		BX
POP		CX
ADD		BX,AX
ADC		CX,DX
ADD		BX,0691
ADC		CX,B800
MOV		ES,CX
POP		AX
ES:
MOV		[BX],AL
INC		SI
s2:CMP		SI,[BP+04]		// 8个字符
JNZ		s1
POP		SI
POP		BP
RET

*/
