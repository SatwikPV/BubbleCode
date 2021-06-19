#include<stdio.h>
void main()
{
    int num,binary=0,rem=0,i=1;
    printf("\t Enter a decimal number : \t");
    scanf("%d",&num);
    while(num)
    {
        rem=num%2;
        num=num/2;
        binary=binary+(rem*i);
        i=i*10;
    }
    printf("\n\t Binary equivalent is %d",binary);
}
