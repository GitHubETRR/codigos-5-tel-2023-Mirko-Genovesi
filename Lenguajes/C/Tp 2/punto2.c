#include <stdio.h>


void get_string(char user_string[999]){
    printf("Introduzca el string:\n");
    gets(user_string);
}


void min_to_mayus(char str[999]){
    for (int i=0; str[i]; i++){
        if(97 <= str[i] && str[i] <= 122) str[i] -= 32;
    }
}


void main(){
    char user_string[999] = {0};
    get_string(user_string);
    min_to_mayus(user_string);
    printf("%s", user_string);
}
