void showchar(char a, int b);

main()
{
	showchar('a', 2);
}

void showchar(char a, int b)
{
	*(char far *)(0xb8000000+160*10+80)=a;
	*(char far *)(0xb8000000+160*10+81)=b;
}

/*
main()
---------------------------
PUSH	BP
MOV		BP,SP

MOV		AX,0002
PUSH	AX
MOV		AL,61
PUSH	AX
CALL	020B		// showcar
POP		CX			//清栈
POP		CX			//清栈

POP		BP
RET


showhar
----------------------------
PUSH	BP
MOV		BP,SP
MOV		AL,[BP+04]	// BP, IP, 'a', 2
						+0  +2 +4   +6
MOV		BX,B800		// *(char far *)(0xb8000000+160*10+80)=a;
MOV		ES,BX
MOV		BX,0690
ES:
MOV 	[BX],AL		// 'a'到显存

MOV		AL,[BP+06]	// 颜色属性2
MOV		BX,B800		// *(char far *)(0xb8000000+160*10+81)=b;
MOV		ES,BX
MOV		BX,0691
ES:
MOV		[BX],AL		// 颜色属性2到显存
POP		BP
RET

*/
