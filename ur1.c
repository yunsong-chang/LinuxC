main()
{
	_AX=1;
	_BX=1;
	_CX=2;
	_AX=_BX+_CX;
	_AH=_BL+_CL;
	_AL=_BH+_CH;
}

/* debug U 1FA	查看代码
PUSH 	BP
MOV 	BP,SP
MOV		AX,0001
MOV		BX,0001
MOV		CX,0002

MOV		AX,BX
ADD		AX,CX

MOV		AH,BL
ADD		AH,CL

MOV		AL,BH
ADD		AL,CH

POP		BP
RET
*/
