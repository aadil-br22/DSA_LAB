#include <stdio.h>
int sum(int a[], int n)
{
    int i;
    int s = 0;
    for (i = 0; i < n; i++)
    {
        s = s + a[i];
    }
    return s;
}
int maxOf(int a[], int n)
{
    int i = 0;
    int max = 0;
    int min = 0;
    for (i = 0; i < n; i++)
    {
       if (max < a[i])
          {
            max = a[i];
          }
    }
    printf("%d", max);         
}
int main()
{
    int m;
    int a[ ] = {12, 45, 7, 23, 9};
    m = sizeof(a)/sizeof(a[0]);
    printf("%d\n", sum(a, m));

    maxOf(a, m);

    return 0;
}