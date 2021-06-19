#include <stdio.h>
#include <conio.h>

int main()

{
    int large = -1111, small = 999999, arr[20], i, n, poslarge, possmall, tempvar;

    printf("Enter the num of elements you want in the array");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        printf("Enter the element");
        scanf("%d", &arr[i]);
    }


    for(i=1; i<=n; i++)
    {
        if(arr[i] >= large)
        {
            large = arr[i];
            poslarge = i;
        }

        if(arr[i] <= small)
        {
            small = arr[i];
            possmall = i;

        }

    }

    tempvar = arr[possmall];
    arr[possmall] = arr[poslarge];
    arr[poslarge] = tempvar;

    for(i=1; i<=n; i++)
    {
        printf("%d", arr[i]);
    }



}
