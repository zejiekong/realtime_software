// TO-DO : DISPLAY IN TABLE , should simplify equation?
#include <stdlib.h>
#include <stdio.h>
#include <math.h>


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
    printf("%.3fx^2 + %.3fx + %.3f",a,b,c);
}

enum root_type quadratic_roots()
{
    float discriminant = b*b -4*a*c; 
    if(discriminant < 0)
    {
        printf("Complex Roots\n");
        root.real = -b / 2*a;
        root.im = sqrtf(-discriminant)/2*a;
        return complex; 
    }
    else if (discriminant == 0)
    {
        printf("Equal Real Roots\n");
        root.x1 = (-b+sqrtf(discriminant))/2*a;
        root.x2 = (-b-sqrtf(discriminant))/2*a;
        return equal;
    }
    else if (discriminant > 0)
    {
        printf("Different Real Roots\n");
        root.x1 = (-b+sqrtf(discriminant))/2*a;
        root.x2 = (-b-sqrtf(discriminant))/2*a;
        return different;
    }
}

void display_table()
{

}

int main()
{
    printf("Start of Program\n");
    keyboard_input();
    switch(quadratic_roots())
    {
        case complex:
            printf("x1: %.3f+%.3fi\nx2: %.3f-%.3fi\n",root.real,root.im,root.real,root.im);
            break;
        case equal:
            printf("x1: %.3f\nx2: %.3f\n",root.x1,root.x2);
            break;
        case different:
            printf("x1: %.3f\nx2: %.3f\n",root.x1,root.x2);
            break;
    }
    display_table();
    exit(0);
}