# 第一章
## GCC编译过程
1. 预处理：对文件进行预处理生成.i文件
```sh
gcc -E main.c -o main.i
```
2. 编译：对预处理后的文件编译生成汇编语言的.s文件
```sh
gcc -S main.i -o main.s
```
3. 汇编：对汇编语言文件进行汇编生成二进制.o文件
```sh
gcc -S main.s -o main.o
```
4. 链接：将各个模块的.o文件按顺序链接起来生成一个可执行文件
```sh
gcc main.o -o main
```