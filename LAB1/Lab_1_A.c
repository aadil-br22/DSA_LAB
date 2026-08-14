#include<stdio.h>
int main() {
    int marks[5]={85, 90, 78, 92, 88};
    int a[5] = {};
    int pos = 1, x = 99, n = 5;
    marks[2] = 100;
    for(int i=0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for(int i=0; i<n; i++) {    
        printf("%d ", a[i]);
    }
    for (int i=n; i>pos; i--) {
        a[i] = a[i-1];
        a[pos] = x;
        n++;
    }
    for ( int i=pos; i<n-1;i++)
    {
        a[i]=a[i+1];
    n--;
    }
}