

/* 
 * File:   main.c
 * Author: ozdem
 *
 * Created on 18 Şubat 2022 Cuma, 14:23
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */

char *_strchr(char *str,int ch)
{
    while(*str != '\0')
    {
        if(*str ==ch)
            return str;
        ++str;
    }
    if(ch == '\0')
        return str;
    return NULL;
}

int main(int argc, char** argv) {

    
    char s[20];
    char *p;
    gets(s);
    p=_strchr(s,'a');
    if(p)
       printf("bulundu:%s\n",p);
       
    else
        printf("bulunamadi\n");
    return (EXIT_SUCCESS);
}

