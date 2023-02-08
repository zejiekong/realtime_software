// file input/output (I/O)

/*
Unbuffered I/O

POSIX -> system call to kernel -> returns file descriptor  
POSIX -> standard definining interface to OS, library functions to OS services
Kernel -> core of OS
returns:
-non negative des
-0 standard input
-1 standard output
-2 standard error

Functions:
1.) int open(char* pathname, int oflag)
2.) int close(int filedes)
*/

/*
Buffered I/O

Functions:
- FILE *fopen(char *pathname, char *type)
- int fclose(FILE *fp)
*/