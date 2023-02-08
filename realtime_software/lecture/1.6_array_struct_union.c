// array: contiguous variables of same type
// structures: collection of variables (can have diff type)
// union: like structure allows to store variable of diff type in same memory location
//        however only able to store only one variable at any one time

#include <stdio.h>

int main()
{
    struct point
    {
        int a;
        int b;
    }a;

    a.a = 3;

    union price
    {
        int dollar;
        float ringgit;
    }b;

    b.dollar = 3; 
    b.ringgit = 4.0; //b.dollar will be removed
    printf("%f",b.ringgit);
}