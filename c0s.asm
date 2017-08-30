assume cs:code

data segment
	db 128 dup (0)
data ends

code segment
start: 
	mov ax, data
	mov ds, ax
	mov ss, ax
	mov sp, 128

	call s
	mov ax, 4c00h
	int 21h

s:

code ends

end start

; masm c0s;
; 替换minic\下的c0s.obj
; tc f.c
; 程序不要main也能运行
