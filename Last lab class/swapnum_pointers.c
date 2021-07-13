#include <stdio.h>

int swap(int *, int *);
int main()
{
    int a, b;

    printf("Enter two nums \t ");
    scanf("%d %d", &a, &b);

    swap(&a, &b);
    printf("The numbers are now \t %d \t %d", a, b);
}

int swap(int *p, int *q)
{
    int temp;

    temp = *p;
    *p = *q;
    *q = temp;
    return p, q;
}
