#include <stdlib.h>
#include <stdio.h>

void func1(int* p)
{
    printf("%d",p[3]);
}

int main()
{
    /*
    int arr[2][3] = {{1,2,3},{4,5,6}};
    func1(&arr[0][0]);
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",arr[i][j]);
        }
        putchar('\n');
    }
    */
   return 0;
}

/*
int a[4] = {1,2,3,4};
int *p;
int x;
p = a; assign p address of 1st element
x = *(p+3); // assign x the element 4
*/

/*
multi-dimensional array
int a[2][3] = {
                {1,2,3},
                {4,5,6}
              }
*/