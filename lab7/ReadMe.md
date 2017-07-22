lab7.c ->

Problem Statement ->

Write a C/C++ program that creates a zombie and then calls system to execute the ps command to verify that the process is zombie.

Compilation ->

$ gcc ques7.c
$ ./a.out 

i am child
my id =3721	parents id = 3720
parent process
F S   UID   PID  PPID  C PRI  NI ADDR SZ WCHAN  TTY          TIME CMD
0 S  1000  2490  2484  0  80   0 -  6772 wait   pts/8    00:00:00 bash
0 S  1000  3720  2490  0  80   0 -  1049 wait   pts/8    00:00:00 a.out
1 Z  1000  3721  3720  0  80   0 -     0 exit   pts/8    00:00:00 a.out <defunct>
0 S  1000  3722  3720  0  80   0 -  1111 wait   pts/8    00:00:00 sh
0 R  1000  3723  3722  0  80   0 -  3553 -      pts/8    00:00:00 ps

