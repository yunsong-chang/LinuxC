void f(void);

main()
{
	_AX=1;
	_BX=1;
	_CX=2;
	f();
}

void f(void)
{
	_AX=_BX+_CX;
}

/* debug U 1FA 查看代码

PUSH 	BP
MOV 	BP,SP
MOV		AX,0001
MOV		BX,0001
MOV		CX,0002

CALL	020B

POP		BP
RET

PUSH	BP
MOV		BP,SP
MOV		AX,BX
ADD		AX,CX
POP		BP
RET

*/
