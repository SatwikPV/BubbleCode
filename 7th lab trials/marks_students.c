#include <stdio.h>
 int main()
 {
      int i, j, m, n, large=-1111;

    int arr[5][5];

    printf("Enter the no of students");
    scanf("%d", &m);

    printf("Enter the no of subjects");
    scanf("%d", &n);


    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("Enter marks in subject %d for student %d\t", (j+1), (i+1));
            scanf("%d", &arr[i][j]);

        }
        printf("\n");
    }

    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            if(arr[i][j] >= large)
            {
                large = arr[i][j];
            }
        }
        printf("%d is the highest marks from student %d", arr[i][j], i);
        large = -1111;
    }

 }
