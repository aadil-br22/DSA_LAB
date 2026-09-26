#include <stdio.h>
int LinearSearch (int a[], int n , int key)
   {
   for (int i = 0; i < n; i++)
      {
        if (a[i] == key)
        
      return -1;
   }
int main()
   {
     int a[] = { 12, 5, 8, 23, 15};
     int n = 5;
     int key = 23;
     
     int result = LinearSearch(a, n, key);
     printf("The index of result is : %d", result);
     return 0;
   }
   
   
