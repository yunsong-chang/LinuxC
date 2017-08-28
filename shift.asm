assume cs:codeseg

codeseg segment
start:
	mov ax, 0A5H
	shl al, 1
	shl al, 1
	shl al, 1

	mov cl, 3
	mov ax, 0A5H
	shl al, cl

	mov ax, 0A5H
	shr al, 1
	
	mov ax, 0A5H
	sal al, 1

	mov ax, 0A5H
	sar al, 1

	mov ax,4c00H
	int 21H
codeseg ends

end start

;
;逻辑移动1位 shl, shr
;移动多于1位 shl al, cl
;左移: shl <=> sal
;右移：shr最高位补0,  C的无符号数的右移 >>
;      sar最高位保留, C的有符号数的右移 >>
