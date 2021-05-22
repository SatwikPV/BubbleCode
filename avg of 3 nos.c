#include <stdio.h>
#include <math.h>

float avg(int, int, int);               //declaring the prototype for the function

void main()
{
    int n1, n2, n3;

    float res;
    printf("Enter three nos \n");
    scanf("%d%d%d", &n1, &n2, &n3);
    res = avg(n1, n2, n3);                          //calling the function
    printf("the average of the 3 nos is %f", res);


}

float avg(int a, int b, int c)
{
    float r1;

    r1 = (float)(a + b + c)/3;

    return r1;

}
