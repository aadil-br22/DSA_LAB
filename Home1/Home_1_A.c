#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x = 25;
    int *p = &x;

    printf("Value of x: %d\n", x);
    printf("Address of x: %p\n", (void *)&x);
    printf("Value stored in p: %p\n", (void *)p);
    printf("Value pointed by p: %d\n", *p);

    *p = 100;
    printf("After change: %d\n", x);

    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    swap(&a, &b);

    printf("After swap: %d %d\n", a, b);

    return 0;
}