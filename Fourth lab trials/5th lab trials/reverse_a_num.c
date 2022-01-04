#include <stdio.h>
#include <conio.h>

int main()
{
    int num, revnum, rem, i;
    printf("Enter a num");
    scanf("%d", &num);

    for(i=0; num!=0; i++)
    {
        revnum = 0;
        rem = num%10;
        revnum = revnum + rem;
        printf("%d", revnum);
        num = num/10;
    }
}
