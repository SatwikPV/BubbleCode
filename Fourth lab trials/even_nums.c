//Develop a c prog to print even nums from m to n
//while method
#include <stdio.h>
int main()
{
    int m, n, rem;
    printf("Enter two nums");
    scanf("%d%d", &m, &n);

    while(m <= n)
    {
        rem = m % 2;
        if(rem == 0)
        {
            printf("the even num is %d\n", m);
        }
         m = m + 1;
    }
}
