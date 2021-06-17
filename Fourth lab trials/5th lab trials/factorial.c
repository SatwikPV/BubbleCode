#include <stdio.h>
#include <conio.h>

int main()
{
    int n;
    printf("Enter a num\n");
    scanf("%d", &n);
    int prod = 1;

    for(n; n!=0; n--);
    {
        prod = prod * n;

    }
    printf("%d\n", prod);
    return 0;
}
