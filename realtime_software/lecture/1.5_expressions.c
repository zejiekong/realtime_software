/*
Logical Operator
&& and 
|| or
! not
*/

/*
**only important for assignment**
i++ increment after use 
++i increment before use
*/

//conditional expression
//x = (x<2) ? 5:12 , if x<2 , x=5 else 12

//bitwise operator
/*
    left shit << , right shift >> 
*/

#include <stdio.h>

void increment()
{
    int i=0;
    printf("%d",i++); //returns value before increment
    printf("%d",i);
}

void condition()
{
    int i = 0;
    i = (i<3) ? 3:0;
    printf("%d",i);
}

int main()
{
    //condition();
    //printf("%d",3/(int)4.0); // cast operator (int)
    //printf("%d",3<5);// true returns 1
    //printf("%d",1<<1); 1 shift left by 1 bit will return 2
    return 0;
}