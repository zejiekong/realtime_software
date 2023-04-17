#include <stdio.h>  
#include <string.h>
#include <stdlib.h>

char wave[10] = "sine";
int freq = 3;
int amp = 3;

FILE *fp;


void write_config()
{
    char amp_string[20];
    char freq_string[20];
    sprintf(amp_string,"%d",amp);
    sprintf(freq_string,"%d",freq);
    char* str[3] = {wave,amp_string,freq_string};
    for(int i=0; i < 3; i++)
    {
        fputs(str[i],fp);
        fputs(" ",fp);
    }    
}


void read_config()
{
    char* str_arr[3];
    char c;
    int x = 0;
    int i = 0;
    char temp_str[10];
    memset(temp_str, 0, sizeof(temp_str));
    while ((c = fgetc(fp)) != EOF) 
    { 
        // Read file character by character until end-of-file (EOF) is reached
        if(c!=' ')
        {
            temp_str[i] = c;
            i++;
        }
        else
        {
            temp_str[i] == '\0';
            str_arr[x] = strdup(temp_str);
            x++;
            i = 0;
            memset(temp_str, 0, sizeof(temp_str));
        }
    }
    for(int i = 0;i<strlen(str_arr[0]);i++)
    {
        wave[i] = str_arr[0][i];
        if (str_arr[0][i]=='\0')
        {
            break;
        }
    }
    amp = atoi(str_arr[1]);
    freq = atoi(str_arr[2]);
}

int main( ) 
{    
    if((fp = fopen("config.txt","r+")) != NULL)
    {
        read_config();
        printf("%s %d %d\n",wave,amp,freq);
        //write_config();
        fclose(fp);      // file is closed automatically  exit(0);  } 
    }
    else
    {
        fp = fopen("config.txt","w");
        write_config();
    }
}
