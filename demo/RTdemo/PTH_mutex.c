//**************************************************************
//	Program : pt_mutex.c 
//	Demonstrates the usage of pthread mutex variables
//
// 	2 October 20 : G.Seet
// 	QNX 6.xx version - QNX example
//****************************************************************

#include <stdio.h>
#include <pthread.h>

pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;
int count = 0;

void* function1( void* arg )
{
    int tmp = 0;

    while( 1 ) {
        pthread_mutex_lock( &mutex );
        tmp = count++;
        pthread_mutex_unlock( &mutex );
        printf( "Count is %d\n", tmp );

        /* snooze for 1 second */
        sleep( 1 );
    }

    return 0;
}

void* function2( void* arg )
{
    int tmp = 0;

    while( 1 ) {
        pthread_mutex_lock( &mutex );
        tmp = count--;
        pthread_mutex_unlock( &mutex );
        printf( "** Count is %d\n", tmp );

        /* snooze for 2 seconds */
        sleep( 2 );
    }

    return 0;
}

int main( void )
{
    pthread_create( NULL, NULL, &function1, NULL );
    pthread_create( NULL, NULL, &function2, NULL );

    /* Let the threads run for 20 seconds. */
    sleep( 20 );

    return 0;
}