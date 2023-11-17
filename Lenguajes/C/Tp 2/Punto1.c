#include <stdio.h>


#define FIRST_STR 0
#define SECOND_STR 1



void get_string(char user_string[2][999]){
    printf("Introduzca el primer string:\n");
    gets(user_string[FIRST_STR]);
    printf("Ahora el segundo:\n");
    gets(user_string[SECOND_STR]);
}


void str_compare(char str[2][999]){
    int diff = 0;
    for(int i = 0; str[FIRST_STR][i] || str[SECOND_STR][i]; i++){
        if(str[FIRST_STR][i]!=str[SECOND_STR][i]) diff++;
    }
    if (diff) printf("Los strings son diferentes");
    else printf("Los strings son iguales");
}


void main(){
    printf("Hola, bienvenido/a al mejor programa que compara strings :)\n");
    char user_string[2][999] = {0};
    get_string(user_string);
    str_compare(user_string);
}
