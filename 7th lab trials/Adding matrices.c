#include <stdio.h>

int main()
{
    int A[4][4], B[4][4], sum[4][4], i, j, r, c;
    printf("Enter the number of rows");
    scanf("%d", &r);

    printf("Enter the number of columns");
    scanf("%d", &c);

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("Enter values for A: \n");
            scanf("%d", &A[i][j]);
        }
    }


    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("Enter values for B: \n");
            scanf("%d", &B[i][j]);
        }
    }


    for(i=0; i<r; i++)
    {

        for(j=0; j<c; j++)
        {
            sum[i][j] = A[i][j] + B[i][j];
        }

    }



    for(i=0; i<r; i++)
    {
        printf("\t |");
        for(j=0; j<c; j++)
        {

            printf("\t %d", sum[i][j]);
        }
        printf("|\n \t");

    }

}
