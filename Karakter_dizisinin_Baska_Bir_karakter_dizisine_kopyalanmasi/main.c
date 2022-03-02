/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   main.c
 * Author: ozdem
 *
 * Created on 18 Şubat 2022 Cuma, 14:35
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */

char *_strcpy(char *dest, char *source){

    
    for(int i=0; (dest[i] = source[i]) != '\0'; i++);
    return dest;
}
    
int main(int argc, char** argv) {

    
   char source[80];
    
    printf("karakter giriniz:");
    gets(source);
    char dest[80];
    
    _strcpy(dest, source);
    printf("%s\n",dest);
    
    return (EXIT_SUCCESS);
}

