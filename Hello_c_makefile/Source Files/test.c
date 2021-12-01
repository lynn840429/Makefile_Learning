#include <stdio.h>

int main(int argc, char **argv)
{
    printf("Hello World!\n");
    return 0;
}

/*
Compile .c -> .o    : $ cc {CFLAGS} -c -o {cfile.o} {cfile.c}
Compile .p -> .exe  : $ cc -o {executive_file} {objfile1.o} {objfile2.o}

ex: 
    $ cc -c -o test.o test.c
    $ cc -o test test.o
    $ ./test
*/
