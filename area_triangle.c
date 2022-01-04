#include <stdio.h>
#include <math.h>

float area(float, float, float); //Function declaration
int main()                           //main function
 {

    float a, b, c, A;               //using float instead of int

    printf("Enter the first side\n");
    scanf("%f", &a);

    printf("Enter the second side\n");
    scanf("%f", &b);

    printf("Enter the third side\n");
    scanf("%f", &c);

    A = area(a, b, c);          //Calling the function

    printf("are of the triangle is %f\t", A);               // printing A
    return 0;

}

float area(float a, float b, float c){
    float s, tri;
    s = (a+b+c)/2;
    tri = sqrt(s*(s-a)*(s-b)*(s-c));
    return tri;
}











