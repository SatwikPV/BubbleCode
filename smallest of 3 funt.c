#include <stdio.h>
#include <conio.h>

int main()
{
    int a, b, c;
    printf("Enter a num");
    scanf("%d", &a);
    printf("Enter a num");
    scanf("%d", &b);
    printf("Enter a num");
    scanf("%d", &c);

    if (a < b && a < c)
    {

        printf("%d is the smallest", a);


        }
    else if( b < a && b < c)
        {

        printf("%d is the smallest", b);

    }

    else if (c < a && c < b)
    {
         printf("%d is the smallest", c);

    }

    return 0;




}



