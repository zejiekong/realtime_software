#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int main(){
int fd;
char c='\0';

if ((fd=open("file.dat",O_WRONLY|O_CREAT|O_TRUNC,S_IRUSR|S_IWUSR))<0){
	perror("cannot open");
	exit(1);
	}

if (lseek(fd,1024,SEEK_END)<0){
	perror("Cannot sek");
	exit(1);
	}

if (write(fd,&c,1)!=1){
	perror("Cannot write");
	exit(1);
	}
exit(0);
}