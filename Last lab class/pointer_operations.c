#include <stdio.h>

int main()
{
    int  *i, *j, a, b;
    char response;

    printf("Enter two nums");
    scanf("%d", &a);
    scanf("%d", &b);

    i = &a;
    j = &b;


    printf("Which operation do you wish to perform?\n");
    scanf(" %c", &response);

    printf("You have chosen %c\n", response);
    switch(response)
    {
        case '+':
            printf("%d", *i + *j);
            break;

        case '-':
            printf("%d", *i - *j);
            break;

        case '*':
            printf("%d", *i * *j);
            break;

        case '/':
            printf("%d", *i / *j);
            break;

    }
    return 0;

}
