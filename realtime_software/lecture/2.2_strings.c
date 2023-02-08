/*
Length of string = string + /0
name of array can be considered a pointer {cannot be modified}
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h> //library for string manipulations

int main()
{
    char str1[] = "string one";
    char* str2 = "string two"; //does same thing but can do pointer arithmetic like *(str2+2)
    //printf("%c",str2[2]); //[] can be thought of as str2 + 2 and dereference
    char* p = str1;
    printf("%c",*p);
    return 0;
}
