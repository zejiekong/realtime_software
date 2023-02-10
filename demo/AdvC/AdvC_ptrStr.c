#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
char str1[]="String one";
char *str2="String two";

printf("str1[2]=%c\n",*(str1+2));
printf("str2[2]=%c\n",*(str2+2));

char a[16];//destination
char b[]="Original String";//buffer >15+1 char for null character

printf("Before strcpy\n");
printf("a[16]=%s\n",a);
printf("b[]=%s\n",b);
strcpy(a,b);
printf("After strcpy\n");
printf("a[16]=%s\n",a);
printf("b[]=%s\n",b);

char c[20];
int i=5;
float f=3.5;

sprintf(c,"%d -- %f",i,f);
printf("c: %s\n",c);

return(0);
}