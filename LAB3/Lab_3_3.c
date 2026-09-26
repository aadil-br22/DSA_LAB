#include <stdio.h>
int CountKey (int a[], int n , int key)
   {
   int flag = 0;
   int i;
   for (i = 0; i < n; i++)
      {
        if (a[i] == key)
           flag = flag + 1;
      }
   return flag;
   }
int main()
   {
     int a[] = { 4, 7, 4, 9, 4, 2};
     int n = 6;
     int key = 4;
     
     int result = CountKey(a, n, key);
     printf("The occurance of k is : %d", result);
     return 0;
   }
