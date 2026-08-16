#include <stdio.h>

int main()
{
    int n, i;
    int a[100];
    int *p;
    int largest;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    p = a;

    printf("Array: ");
    for (i = 0; i < n; i++)
        printf("%d ", *(p + i));

    largest = *p;

    for (p = a + 1; p < a + n; p++)
    {
        if (*p > largest)
            largest = *p;
    }

    printf("\nLargest = %d\n", largest);

    return 0;
}