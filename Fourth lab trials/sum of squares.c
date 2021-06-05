#include <stdio.h>
#include <math.h>
int main()
{
    int i = 1, n, sumsqr = 0;
    printf("Enter a num");
    scanf("%d", &n);
    while(i <= n)
    {
        if((i%2) != 0)
        {
            sumsqr = sumsqr + (i*i);
        }
        i = i + 1;
    }
    printf("the sum is %d", sumsqr);

    return 0;

}
