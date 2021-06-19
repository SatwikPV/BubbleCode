#include <stdio.h>
#include <conio.h>

int main()

{
    int arr[20], i, n, pos, newele;
    int response;

    printf("Enter the num of elements you want in the array");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        printf("Enter the element\t");
        scanf("%d", &arr[i]);
    }

    printf("Would you like to insert an element or delete an element?\n 0 or 1\n");
    scanf("%d",&response);
    printf("You have chosen %d\n", response);

    if(response==0)
    {
        printf("Type the pos where you would like to insert the element\n");
        scanf("%d", &pos);

        printf("What do you want to insert?\n");
        scanf("%d", &newele);

        for(i=n+1; i>=pos; i--)
        {
            arr[i] = arr[i-1];
        }

        arr[pos] = newele;

        for(i=1; i<=n+1; i++)
        {
            printf("%d\t", arr[i]);
        }
    }

    else if(response==1)
    {
        printf("Type the pos of the element you would like to delete\t");
        scanf("%d", &pos);

        for(i=pos; i<=n; i++)
        {
            arr[i] = arr[i+1];
        }
        for(i=1; i<=n-1; i++)
        {
            printf("%d\t", arr[i]);
        }

    }

return 0;
}

