构建xp下的masm编程环境

先将masm5拷贝到D:\work\masm5目录下

path.bat
rem @echo off
set path=%path%;D:\work\masm5

build.bat
masm %1;
link %1; 

clean.bat
@echo off
del *.exe *.obj *.lst *.map *.crf

