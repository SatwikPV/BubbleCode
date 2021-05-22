//write a program to calculate area of circle using functions
#include <stdio.h>
#include <math.h>
float circle(float);
    int main(){
    float r, area;
    scanf("%f", &r);
    area = circle(r);
    printf("the area is %f", area);
    return 0;
}
float circle(float r){
    float c;
    c = 3.14 * pow(r, 2);
    return c;

}
