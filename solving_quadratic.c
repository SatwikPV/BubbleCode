#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(){
    int a, b, c;
    float D, root1, root2, denom;
    printf("Enter the coefficients quadratic eqn:\n");
    scanf("%d \t %d \t %d", &a, &b, &c);
    D = b*b- 4*a*c;
    denom = 2*a;

    if (D < 0)
    {
        float imgpart1, imgpart2;
        printf("No real roots \t");
        root1 = -b/denom;
        imgpart1 = abs(D)/denom;
        root2 = -b/denom;
        imgpart2 = abs(D)/denom;
        printf("%.2f + i(%.2f) \n \t\t %.2f - i(%.2f)", root1, imgpart1, root2, imgpart2);
    }
    else if(D == 0)
    {
        root1 = (-b)/denom;

        printf("The eqn has equal roots \t");
        printf("%.2f", root1);

    }
    else if(D > 0)
    {
        root1 = (-b + sqrt(D))/denom;
        root2 = (-b - sqrt(D))/denom;

        printf("%.2f \n", root1);
        printf("%.2f", root2);
     }
return 0;




}
