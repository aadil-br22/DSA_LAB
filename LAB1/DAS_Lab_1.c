#include <stdio.h>
int main()
{
 int marks[5] = {85, 90, 78, 92, 88};
 int a[5] = {};

 printf("%d", marks[2]);
 marks[2] = 100;

 int n, pos, x;

 scanf("%d", &n);
 scanf("%d", &pos);
 scanf("%d", &x);

for(int i=0; i<n; i++)
   {
     scanf("%d", &a[i]);
   }
for(int i=0; i<n; i++)
   {
      printf("%d", a[i]);
   }

for(int i=n; i>pos; i--) //Inserting element at i-th position and right shift.
   { 
       a[i] = a[i-1];
       a[pos] = x;  
   }
   n++;

for(int i=pos; i<n; i++) //Deleting element from i-th position and left shift.
   {
     a[i] = a[i-1];
     a[pos] = x; 
   }
   n--;
}