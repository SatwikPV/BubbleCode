#include <stdio.h>
#include <conio.h>

int main()
{
    char ltr;
    scanf("%c", &ltr);
    switch (ltr)
    {
        case 'a': printf("This is a vowel");
        break;
        case 'i': printf("this is a vowel");
        break;
        case 'o': printf("this is a vowel");
        break;
        case 'u': printf("this is a vowel");
        break;
        case 'e': printf("this is a vowel");
        break;
        default: printf("it is a consonant");

    }
    return 0;
}
