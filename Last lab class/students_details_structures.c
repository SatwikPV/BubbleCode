#include <stdio.h>
struct classroom
{
    char name[20];
    char USN[20];
    int age;
    int marks;
};

int main()
{
    int i, n, m;

    struct classroom students[20];
    printf("Enter the number of students in the classroom");
    scanf("%d", &n);

    system("cls");

    for(i=0; i<n; i++)
    {

        printf("\nEnter the name of the student\t");
        scanf("%s", students[i].name);

        printf("\nEnter the USN of the student\t");
        scanf("%s", students[i].USN);

        printf("\nEnter the age of the student\t");
        scanf("%d", &students[i].age);

        printf("\nEnter the marks of the student\t");
        scanf("%d", &students[i].marks);

        system("cls");
    }

    printf("Which student's details do you want to access?");

    scanf("%d", &m);

    printf("Name: %s \n USN: %s \n Age: %d \n Marks: %d", students[m-1].name, students[m-1].USN, students[m-1].age, students[m-1].marks);

printf("genre: %s \n name of the author: %s \n price: %d \n No. of pages: %d \n Date of publication: %s", book[m-1].genre, book[m-1].author, &book[m-1].price, &book[m-1].no_pages, book[m-1].date_publication);

    int large = -11111, p;

    for(i=0; i<n; i++)
    {
        if(students[i].marks > large)
        {
            large = students[i].marks;
            p = i;
        }
    }
        printf("\nStudent %d has more marks", p+1);

}

