assume cs:codeseg

codeseg segment
start:
	mov ax,0123H
ok:	mov bx,0456H
	add ax,bx
	add ax,ax

	mov ax,4c00H
	int 21H
codeseg ends

end ok
