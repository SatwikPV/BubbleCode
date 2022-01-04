#include <stdio.h>
#include <math.h>
float hour_to_min(float);

int main(){
    float time_mins, time_hours;
    printf("enter time in hours");
    scanf("%f", &time_hours);

    time_mins = hour_to_min(time_hours);
    printf("the time in mins is %.2f", time_mins);
    return 0;

}

float hour_to_min(float time_hours){
    float cal;
    cal = time_hours * 60;

    return cal;
    }
