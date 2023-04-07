// TO-DO : DISPLAY IN TABLE , should simplify equation?
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>


float a,b,c;
struct roots
{
    float x1;
    float x2;
    float real;
    float im;
}root;

enum root_type{complex=0,equal=1,different=2};

void keyboard_input()
{
    printf("Please input a\n");
    while (!scanf("%f",&a))
    {
        printf("Please input a again\n");
        while(getchar()!='\n');
    }
    printf("Please input b\n");
    while (!scanf("%f",&b))
    {
        printf("Please input b again\n");
        while(getchar()!='\n');
    }
    printf("Please input c\n");
    while (!scanf("%f",&c))
    {
        printf("Please input c again\n");
        while(getchar()!='\n');
    }
    //printf("%.3fx^2 + %.3fx + %.3f\n",a,b,c);
    printf("\n");
}

enum root_type quadratic_roots()
{
    float discriminant = b*b -4*a*c; 
    if(discriminant < 0)
    {
        //printf("Complex Roots\n");
        root.real = -b / 2*a;
        root.im = sqrtf(-discriminant)/2*a;
        return complex; 
    }
    else if (discriminant == 0)
    {
        //printf("Equal Real Roots\n");
        root.x1 = (-b+sqrtf(discriminant))/2*a;
        root.x2 = (-b-sqrtf(discriminant))/2*a;
        return equal;
    }
    else if (discriminant > 0)
    {
        //printf("Different Real Roots\n");
        root.x1 = (-b+sqrtf(discriminant))/2*a;
        root.x2 = (-b-sqrtf(discriminant))/2*a;
        return different;
    }
}

void lines(char x,int length)
{
    char out[length];
    memset(out, x , length);
    out[length] = 0;
    printf("%s\n", out);
}

void display_table()
{
    lines('_',105);
    
    printf("|Equation \t\t\t |Root 1 \t\t |Root 2 \t\t |Type of Roots \t|\n");
    printf("|%.3fx^2 + %.3fx + %.3f \t",a,b,c);
    

    switch(quadratic_roots())
    {
        case complex:
            printf(" |%.3f+%.3fi\t\t" , root.real,root.im);
            printf(" |%.3f-%.3fi\t\t" , root.real,root.im);
            printf(" |Complex Roots \t|\n");
            break;
        case equal:
            printf(" |%.3f\t\t",root.x1);
            printf(" |%.3f\t\t",root.x2);
            printf(" |Equal Real Roots \t|\n");
            break;
        case different:
            printf(" |%.3f\t\t",root.x1);
            printf(" |%.3f\t\t",root.x2);
            printf(" |Different Real Roots \t|\n");
            break;
    }

    lines('-',105);
    printf("\n");
}

int main()
{
    printf("Start of Program\n");
    keyboard_input();
    display_table();
    exit(0);
}