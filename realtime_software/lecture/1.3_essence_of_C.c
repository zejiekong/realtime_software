//variable type 
//size of type depends on operating system
//can check using sizeof()

// char(1 byte)

// short(2 bytes),integer(4 bytes),long(4 bytes)
// - signed/unsigned

// float(4 bytes),double(8 bytes) 

// enum
// - enumerated: limited set variable
// - need to define variable set
#include <stdio.h>

int main()
{
    int hi;
    enum week{Mon=0,Tue=1,Wed=3};
    int day = Mon;
    printf("%d\n",day); //format specifier %d
    scanf("%d",&hi);
    return 0;
}

/*
declaration:
- defines name and type
- no memory allocation
*/

/*
definition:
-allocates storage
*/

/*
assignment:
-given a value
*/