#include <stdio.h>

int main()
{
    int n, i, pos, value;

    scanf("%d", &n);

    int a[100];

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &value);
    scanf("%d", &pos);

    for (i = n; i > pos; i--)
        a[i] = a[i - 1];

    a[pos] = value;
    n++;

    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}