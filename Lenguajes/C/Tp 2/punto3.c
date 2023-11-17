#include <stdio.h>

#define QUAN 10


void user_input(float temp[QUAN]){
    for(int i=0; i<QUAN; i++){
        printf("Introducir la temperatura N%d:\n",i+1);
        scanf("%f", &temp[i]);
    }
}


float min_temp(float temp[QUAN]){
    float minimal_temp = temp[0];
    for(int i=0; i<QUAN; i++){
        if (temp[i]<minimal_temp){
            minimal_temp = temp[i];
        }
    }
    return minimal_temp;
}


float max_temp(float temp[QUAN]){
    float maximum_temp = temp[0];
    for(int i=0; i<QUAN; i++){
        if (temp[i]>maximum_temp){
            maximum_temp = temp[i];
        }
    }
    return maximum_temp;
}


float avr_temp(float temp[QUAN]){
    float average_temp = 0;
    for (int i=0; i<QUAN; i++){
        average_temp += temp[i];
    }
    average_temp /= QUAN;
    return average_temp;
}


int range_temp(float temp[QUAN]){
    int quantity = 0;
    for (int i=0; i<QUAN; i++){
        if (10<=temp[i] && temp[i]<=20){
            quantity++;
        }
    }
    return quantity;
}


void main(){
    float temp[QUAN] = {0};
    user_input(temp);
    float minimal_temp = min_temp(temp);
    float maximum_temp = max_temp(temp);
    float average_temp = avr_temp(temp);
    int range_quantity = range_temp(temp);
    printf("Temperatura media: %fC°\nTemperatura mínima: %fC°\nTemperatura maxima: %fC°\n\
La siguiente cantidad de temperaturas se econtró entre 10 y 20 grados: %d\
", average_temp, minimal_temp, maximum_temp, range_quantity);

}
