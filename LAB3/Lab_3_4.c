#include <stdio.h>
int MaxPos (int a[], int n)
   {
   int max = a[0]; 
   int i;  
   int max_index = 0; 
   for(i = 0; i < n; i++)
      {
        if (a[i] > max)
        {
          max = a[i];
          max_index = i;
        }
      }
   return max_index;
   }
int main()
   {
     int a[] = { 12, 45, 7, 23, 9};
     int n = 5;
     
     int result = MaxPos (a, n);
     printf("The position of the maximum number is : %d", result);
     return 0;
   }
