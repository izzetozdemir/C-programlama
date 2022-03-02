/*
 * File:   main.c
 * Author: ozdem
 *
 * Created on 18 Şubat 2022 Cuma, 14:14
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */

int _sterlen(char *str)
{
    int n=0;
    
    while(*str != '\0')
    {
        n++;
        ++str;
    }
    return n;
    
}
int main(int argc, char** argv) {

    
    char s[100];
    
    printf("Karekter dizisi giriniz:");
    gets(s);
    
    printf("uzunluk=%d\n",_sterlen(s));
    
    return (EXIT_SUCCESS);
}

