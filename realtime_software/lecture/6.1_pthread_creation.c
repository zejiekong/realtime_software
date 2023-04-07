//**************************************************************************
//	Program : pt_create.c
//	Demonstrates simple thread process.
// 	Threads drop out of the procedure when done. Threads have access to 
// 	current process's code and data.
//
//	Revised for QNX6.3 : 4 November 2010
//
//**************************************************************************

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>


void* thred(void * arg)
{
    printf("Thread process\n");
    sleep(1);
}

int main(int argc,char *argv[])
{
    pthread_t hi;
    printf("Starting a thread from main\n");
    pthread_create(&hi,NULL,&thred,NULL);
    pthread_join(hi,NULL);
    printf("main exit\n");
    return(EXIT_SUCCESS);
}
