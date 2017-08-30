main()
{
	*(char *)0x2000='a';
	*(int *)0x2000=0xf;
	*(char far *)0x20001000='a';

	_AX=0x2000;
	*(char *)_AX='b';

	_BX=0x1000;

	*(char *)(_BX+_BX)='a';

	*(char far *)(0x20001000+_BX) = *(char *)_AX;
}

/* debug U 1FA 查看代码
地址
指针

PUSH	BP
MOV		BP,SP

MOV		BYTE PTR [2000], 61				// *(char *)0x2000='a';
MOV		WORD PTR [2000], 000F			// *(int *)0x2000=0xf;
MOV		BX,2000							// *(char far *)0x20001000='a';
MOV		ES,BX
MOV		BX,1000
ES:
MOV 	BYTE PTR [BX],61

MOV		AX,2000							// _AX=0x2000;
MOV		BX,AX
MOV		BYTE PTR [BX],62				// *(char *)_AX='b'

MOV		BX,1000							// _BX=0x1000
ADD		BX,BX							// *(char *)(_BX+_BX)='a'
MOV		BTYE PTR [BX],61

MOV		BX,AX							// *(char far *)(0x20001000+_BX)=*(char *)_AX;
MOV		AL,[BX]
XOR		CX,CX
ADD		BX,1000
ADC		CX,2000
MOV		ES,CX
ES:
MOV		[BX],AL

POP		BP
RET

体会地址，段地址
地址放在BX中，mov byte ptr [BX], 62

*/
