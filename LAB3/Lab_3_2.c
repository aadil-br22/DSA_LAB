#include <stdio.h>
int LinearSearch (int a[], int n , int key)
   {
     int i;            
     for (i = 0; i < n; i++)
        if (a[i] == key)
        return -1;
   }
int main()
   {
     int a[] = { 5, 8, 12, 15, 23, 34, 41};
     int n = 5;
     int key = 23;
     
     int result = LinearSearch(a, n, key);
     printf("The index of result is : %d", result);
     return 0;
   }
