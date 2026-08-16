#include <stdio.h>

struct Book
{
    char title[50];
    char author[50];
    float price;
};

int main()
{
    int n, i, expensive;
    float total = 0;

    struct Book books[100];

    printf("Enter number of books: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter title, author and price: ");
        scanf("%s %s %f", books[i].title, books[i].author, &books[i].price);
    }

    expensive = 0;

    printf("\nBook List:\n");

    for (i = 0; i < n; i++)
    {
        printf("%s %s %.1f\n",
               books[i].title,
               books[i].author,
               books[i].price);

        total += books[i].price;

        if (books[i].price > books[expensive].price)
            expensive = i;
    }

    printf("\nCostliest: %s (%.1f)\n",
           books[expensive].title,
           books[expensive].price);

    printf("Average = %.1f\n", total / n);

    return 0;
}