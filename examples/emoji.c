#include <stdlib.h>
#include <stdio.h>

int main()
{
    int emoji[] = {0x18,0x18,0x18,0xff,0xff,0x18,0x18,0x18,};
    int msk = 0xff;
    for(int i=0;i<sizeof(emoji)/sizeof(int);i++)
    {
        for(int x=0;x<8;x++)
        {
            msk = 1 << 7-x;
            if ((msk & emoji[i]) == 0)
            {
                putchar('0');
            }
            else
            {
                putchar('1');
            }
        }
        putchar('\n');
   }
    exit(0);
}