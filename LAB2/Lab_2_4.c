#include <stdio.h>
int search(int a[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == key)
        return i;
    }
    return n;
}

int main()
{
    int n, key, index;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    scanf("%d", &key);
    index = search(a, n, key);
    if (index < n)
        printf("Found at index %d", index);
    else
        printf("Not found");

    return 0;
}