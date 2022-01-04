#include <stdio.h>
#include <conio.h>

int main()
{
    int arr[20], n, i, temp;
    printf("Enter the num of elements you want in the array");
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        printf("Enter the element");
        scanf("%d", &arr[i]);
    }

    for(i=0; i<=n/2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n-i];
        arr[n-i] = temp;


    }

    for(i=1; i<=n; i++)
    {
        printf("%d\t", arr[i]);

    }


}
