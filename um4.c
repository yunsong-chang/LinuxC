int f(void);

int a,b,ab;

main()
{
	int c;

	c=f();
}

int f(void)
{
	ab=a+b;

	return ab;
}

/*
函数返回值放在哪里
PUSH 	BP
MOV		BP,SP
SUB		SP,+02			// C变量
CALL	020A
MOV		[BP-02],AX		// C=AX, AX函数f()的返回值
MOV		SP,BP
POP		BP
RET

PUSH	BP
MOV		BP,SP
MOV		AX,[01A6]
ADD		AX,[01A8]
MOV		[01AA],AX
MOV		AX,[01AA]
JMP		021C			// 调到下面的POP BP EB00   有意思
POP		BP
RET
*/

