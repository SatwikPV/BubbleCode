#include <stdio.h>
#include <math.h>
int main()
{
    float c, f;
    printf("Enter the temp in fahrenheit\t");
    scanf("%f", &f);
    c = (f-32)*5/9;
    printf("The temperature in celsius is %f", c);
    return 0;
}
