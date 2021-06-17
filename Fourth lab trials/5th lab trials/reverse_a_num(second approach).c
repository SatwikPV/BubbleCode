#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int num, i;
    printf("Enter a num");
    scanf("%d", &num);
    int rev=0, rem=0;

    for(num; num!=0; num=num/10)
    {
        rem = num%10;
        rev = rev*10 + rem;

    }
    printf("the reverse of the num is %d", rev);
    return 0;
}
