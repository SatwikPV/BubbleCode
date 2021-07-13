//Write a c program to read and print 3 book details (i.e. Book details, price, author, number of  pages, date of publication.) Also print the book details with the highest price

#include <stdio.h>

struct books
{
    char genre[20];
    char author[20];
    int price;
    int no_pages;
    char date_publication[20];

};

int main()

{
    int i, m;

    struct books book[20];
    for(i=0; i<3; i++)
    {

        printf("\nEnter the genre\t");
        scanf(" %s", book[i].genre);

        printf("\nEnter the name of the author\t");
        scanf(" %s", book[i].author);

        printf("\nEnter the price\t");
        scanf(" %d", &book[i].price);

        printf("\nEnter the no of pages\t");
        scanf(" %d", &book[i].no_pages);

        printf("\nEnter the date of publication\t");
        scanf(" %s", book[i].date_publication);
    }


    printf("Which book do want to know about");
    scanf("%d", &m);


    printf("genre: %s \n name of the author: %s \n price: %d \n No. of pages: %d \n Date of publication: %s", book[m-1].genre, book[m-1].author, &book[m-1].price, &book[m-1].no_pages, book[m-1].date_publication);

    int large = -11111, p;

    for(i=0; i<3; i++)
    {
        if(book[i].no_pages > large)
        {
            large = book[i].no_pages;
            p = i;
        }
    }
        printf("\nBook %d has more no. of pages", p+1);




}
