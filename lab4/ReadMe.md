lab4.c ->

Problem Statement ->

Write a C/C++ program which demonstrates interprocess communication between a reader process and a writer process. Use mkfifo, open, read, write and close APIs in your program.

Compilation ->

$ gcc lab4.c -o read.out
$ gcc lab4b.c -o write.out


[Terminal 1]
$ ./write.out file2


[Terminal 2]
$ ./read.out file2

 hello world!
