#include <stdio.h>
#include <string.h>

int main()
{
    char str1[20], str2[20], str[20];
    int i, j, n=0, m=0, k=0;

    printf("Enter a string\t");
    gets(str1);


    printf("Enter a string you want to add to this");
    gets(str2);

    for(i=0; str1[i]!='\0'; ++i)
    {
        n++;
    }
    printf("\n Length of first string is\t%d", n);

     for(i=0; str2[i]!='\0'; ++i)
    {
        m++;
    }
    printf("\n LEngth of second string is \t %d\n", m);

    for(i=0; i<m;i++)
    {
        str1[n+i] = str2[i];
    }

    puts(str1);


    for(i=0; str1[i]!='\0'; ++i)
    {
        k++;
    }
    printf("\n Length of final string is \t %d", k);

}




