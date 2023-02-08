//type declaration
//create own data type

/*
example: typedef int integer , int is referred as integer
*/

#include <stdio.h>

struct point
{
    int a;
    int b;
};

typedef struct point Point;

int main()
{
    Point a;    
    a.a = 3;
}