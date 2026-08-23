#include <stdio.h>
int badSwap(int a, int b)
{
    int t = a;
    a = b;
    b = t;
    printf("%d\n%d", a, b);
}

int main(){

    badSwap(5, 8);
    return 0;
}