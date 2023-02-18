#include <stdio.h>

int main()

{  

 int n, value, m, k, r, i;
 value=1;

 scanf("%d", &r);
 int a[r+1][r+1];

 for (i = 1; i <= r; i++) {

   m = 0;

   n = i;

   for (k = 1; k <= i; k++)
    { --n;
     a[m][n] = value++;
     m++;
    }

 }

 for (i = 1; i <= r-1; i++) {

   m = i;

   n = r-1;

   for (k = 1; k<= r-i; k++)
    {
     a[m][n] = value++;
     m++; n--;
    }

 }

 for (i = 0; i <= r-1; i++) {

   for (k = 0; k <= r-1; k++)

     printf("%d ", a[i][k]);

   printf("\n");

 }

 return 0;

}