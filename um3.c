int a1,a2,a3;

void f(void);

main()
{
	int b1, b2, b3;

	a1=0xa1;
	a2=0xa2;
	a3=0xa3;

	b1=0xb1;
	b2=0xb2;
	b3=0xb3;
}

void f(void)
{
	int c1, c2, c3;

	a1=0x0fa1;
	a2=0x0fa2;
	a3=0x0fa3;

	c1=0xc1;
	c2=0xc2;
	c3=0xc3;
}

/* debug U 1FA 查看代码

PUSH 	BP
MOV		BP,SP						什么意思？
SUB		SP,+06
MOV		WORD PTR [01A6], 00A1
MOV		WORD PTR [01A8], 00A2
MOV		WORD PTR [01AA], 00A3 		全局变量放在那里？
MOV		WORD PTR [BP-06], 00B1
MOV		WORD PTR [BP-04], 00B2
MOV		WORD PTR [BP-02], 00B3		局部变量放在那里？
MOV 	SP,BP
POP		BP
RET

PUSH 	BP
MOV		BP,SP
SUB		SP,+06
MOV		WORD PTR [01A6], 0FA1
MOV		WORD PTR [01A8], 0FA2
MOV		WORD PTR [01AA], 0FA3
MOV		WORD PTR [BP-06], 00C1
MOV		WORD PTR [BP-04], 00C2
MOV		WORD PTR [BP-02], 00C3
MOV 	SP,BP
POP		BP
RET
*/
