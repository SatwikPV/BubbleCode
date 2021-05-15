#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, avg;
    printf("enter the 3 nos");
    scanf("%f %f %f", &a, &b, &c);
    avg = (a + b + c)/3;
    printf("the avg is %f", avg);
    return 0;
}
