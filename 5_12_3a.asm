;在屏幕的5行12列显示3个红底高亮闪烁的绿色的‘a'
assume cs:code
code segment
	mov ah,2			;置关标
	mov bh,0			;第0页
	mov dh,5			;行号
	mov dl,12			;列号
	int 10h

	mov ah,9			;置光标
	mov al,'a'			;字符
	mov bl,11001010b	;颜色
	mov bh,0			;第0页
	mov cx,3			;字符重复个数
	int 10h

	mov ax,4c00h
	int 21h

code ends
end
