#include <pthread.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int global = 0;
pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;

void* thread(void* arg)
{
    pthread_mutex_lock(&mutex);
    printf("Thread %d global is %d\n",*(int*)arg,++global);
    sleep(1);
    pthread_mutex_unlock(&mutex);
}

int main()
{
    pthread_t lol[3];
    for(int i = 0;i<3;i++) 
    {
        pthread_create(&lol[i],NULL,&thread,&lol[i]);
    }
    pthread_join(lol[0],NULL);
    pthread_join(lol[1],NULL);
    pthread_join(lol[2],NULL);
    return(EXIT_SUCCESS);
}