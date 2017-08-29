main()
{
	printf("%x\n", main);
}

/* 
main入口地址 01FA
debug U 1FA 查看代码
g 0B3A:011A call 01FA	调到main, t执行到main里

PUSH	BP
MOV		BP,SP
MOV		AX,01FA		;main符号地址
PUSH	AX
MOV		AX,0194		;%x
PUSH	AX
CALL	0AC0
POP		CX			;平衡栈
POP		CX			;平衡栈
POP		BP
RET

*/
