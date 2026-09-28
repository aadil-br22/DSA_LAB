#include <stdio.h>

void minMax(int a[], int n, int *mn, int *mx)
{
    *mn = a[0];
    *mx = a[0];

    for(int i = 1; i < n; i++)
    {
        if(a[i] < *mn)
            *mn = a[i];

        if(a[i] > *mx)
            *mx = a[i];
    }
}

int main()
{
    int n, min, max;
    scanf("%d", &n);

    int a[n];

    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    minMax(a, n, &min, &max);

    printf("Min = %d, Max = %d", min, max);

    return 0;
}