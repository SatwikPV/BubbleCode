#include<stdio.h>

int swap(int, int);

int main()
{
    int a, b;
    printf("Enter values for a and b\n");
    scanf("%d%d", &a, &b);

    printf("\nBefore swapping:(%d,%d)", a, b);

    swap(a, b);
    return 0;
}

int swap(int x, int y)
{
    int temp;

    temp = x;
    x    = y;
    y    = temp;

    printf("\nAfter swapping: (%d,%d)\n", x, y);
}
