#include <stdio.h>
#include <conio.h>

int main()
{
    int num, i;
    printf("Enter a num\n");
    scanf("%d", &num);
    int flag = 0;


    for(i=2; i<=num/2; i++)
    {
        if(num%i==0)
        {
            flag = 1;
            break;
        }

    }
    if(flag==0)
    {
        printf("it is  a prime number");

    }
    if(flag==1)
    {
        printf("It is a composite number");

    }
    return 0;

}

