#include <stdio.h>
#include <conio.h>

int main()
{
    int num=2, i, flag=0, maxnum;

    printf("Enter a num till where you need prime nos to be printed\n");
    scanf("%d", &maxnum);

    do
    {
        for(i=2; i<=num/2; i++)
        {
            if(num%i==0)
            {
                flag==1;
                break;

            }
        }

        if(flag==0)
            {
            printf("%d\n", num);
            }
        num++;

        }while(num<=maxnum);

return 0;
}
