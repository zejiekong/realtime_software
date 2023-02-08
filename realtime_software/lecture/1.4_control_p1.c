// repetition statements
/*
while, do-while, for
*/

//interrupt flow within loops
/*
break, continue
*/

//conditional branch
/*
if, else if, else
switch, case, default
*/

#include <stdio.h>

enum num{one=1,two=2,three=3};

int main()
{
    int num = three;
    //switch
    switch(num)
    {
        case one:
            printf("%d",one);
        case two:
            printf("%d",two);
        case three:
            printf("%d",three);
    }

    //for 
    for(int i=0;i<5;i++)
    {
        printf("pro");
        continue; //skips current iteration
        printf("hi"); //this is not executed
    }
}
