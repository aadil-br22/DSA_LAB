#include <stdio.h>
int swap(int *x, int *y)
{
    int t;
    t = *x;
    *x = *y;
    *y = t;
    printf("%d\n%d", *x, *y);
}
int main()
{
    int m = 5;
    int n= 8;
    swap(&m, &n);
    return 0;
}