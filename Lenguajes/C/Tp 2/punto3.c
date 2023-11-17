#include <stdio.h>


void user_input(float temp[10]){
    for(int i=0; i<11; i++){
        scanf("%f", &temp[i]);
    }
}



void main(){
    float temp[10] = {0};
    user_input(temp);
}
