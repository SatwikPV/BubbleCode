#include <stdio.h>
#include <conio.h>

int main()
{
    int sum = 0, arr[20], i, n;
    printf("Enter the num of elements in the array");
    scanf("%d", &n);


    for(i=1; i<=n; i++)
    {
        printf("Enter the element");
        scanf("%d", &arr[i]);
    }
    for(i=1; i<=n; i++)
    {
        sum = sum + arr[i];
    }
    printf("%d is the sum", sum);


}

