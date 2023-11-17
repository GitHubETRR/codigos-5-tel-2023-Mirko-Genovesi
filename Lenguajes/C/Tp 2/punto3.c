#include <stdio.h>

#define QUAN 10


void user_input(float temp[QUAN]){
    for(int i=0; i<QUAN; i++){
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



void main(){
    float temp[QUAN] = {0};
    user_input(temp);
    float minimal_temp = min_temp(temp);
    float maximum_temp = max_temp(temp);
    float average_temp = avr_temp(temp);

}
