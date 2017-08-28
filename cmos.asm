assume cs:codeseg

codeseg segment
start:
	nop
	mov al,9	;year
	out 70h,al
	in  al, 71h
	nop
	nop
	nop

	mov al,8	;month
	out 70h,al
	in  al, 71h
	nop
	nop
	nop

	mov al,7	;day
	out 70h,al
	in  al, 71h
	nop
	nop
	nop

	mov al,4	;hour
	out 70h,al
	in  al, 71h
	nop
	nop
	nop

	mov al,2	;minute
	out 70h,al
	in  al, 71h
	nop
	nop
	nop

	mov al,0	;second
	out 70h,al
	in  al, 71h
	nop
	nop
	nop

	mov ax,4c00H
	int 21H
codeseg ends

end start
