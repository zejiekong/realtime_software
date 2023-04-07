//pidin only for qnx
//ps shows processes associated with terminal
//spawn creates another process (child)
//fork creates exact copy of parent process with unique PID

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int main()
{
    //system("ls -t -r"); //runs as shell command
    //execl("/bin/ls","/bin/ls","-t","-r",NULL ); //execl runs another program without changing process ID
    
    //practice
    pid_t pid;
    system("/home/zejie/Desktop/realtime_software/build/realtime_software/lecture/1.3");
    if (pid = fork()==0)
    {
        printf("%d",pid);
        printf("this is the child");
    }
    else
    {
        printf("%d",pid);
    }
    //execl("/home/zejie/Desktop/realtime_software/build/realtime_software/lecture/1.3",NULL);
}