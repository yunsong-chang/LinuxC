#include <elf.h>

int main()
{
	Elf32_Ehdr elf_header;
	Elf32_Shdr section_header;
	Elf32_Phdr program_header;
	Elf32_Sym  sym_table;
	return 0;
}

#if 0

cscope
ctrl+]		 go to definition;		ctrl+t	 go back
ctrl+\+g   	ctrl+space+g		ctrl+space+space+g	调到定义处/水平窗口/垂直窗口
	   f	open file
Tab: 		select cscope function
ctrl+D:		quit cscope

/etc/bash.bashrc
为什么要用myscope？	为什么不直接使用用cscope？
myscope()
{
        find /usr/include -maxdepth 1 -name "*.[ch]" > cscope.files
        find /usr/lib/gcc/i486-linux-gnu/4.4/include/ -maxdepth 1 -name "*.[ch]" >> cscope.files
#       为这两个目录下的全部文件建立索引
#       find /usr/include -name "*.[ch]" > cscope.files
#       find /usr/lib/gcc/i486-linux-gnu/4.4/include/ -name "*.[ch]" >> cscope.files
        find . -name "*.[ch]" >> cscope.files
        cscope -bk
}

比较
myscope 1			myscope 全部文件		cscope默认
  723,891			4,652,631				88,756
1,096,999			4,654,570 执行cscope后
/usr/include/elf.h  /usr/include/elf.h		/usr/include/elf.h
                    /usr/include/linux/elf.h
                    /usr/include/sys/elf.h
#endif
