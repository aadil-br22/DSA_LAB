#include <stdio.h>
int doubleAll(int a[], int n)
{
    int i;
    for (i = 0; i<n; i++)
    {
        a[i] *= 2;
        printf("%d\n", a[i]);
    }
    
}
int main()

{
    int a[4] = {1, 2, 3, 4};
    doubleAll(a, 4);
    return 0;
}