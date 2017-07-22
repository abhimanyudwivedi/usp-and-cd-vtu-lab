lab9.c

Problem Statement

Write a C/C++ program to implement the system function.

Compilation

$ gcc lab9.c
lab9.c: In function ‘mysystem’:
lab9.c:15:3: warning: missing sentinel in function call [-Wformat=]
   execl("/bin/sh","sh","-c",cmd,0);
   ^
$ ./a.out ls
a.out  lab9.c  ReadMe.md  ReadMe.md~
system completed
$ ./a.out pwd
/home/abhimanyu/gitwork/usp-and-cd/lab9
system completed

