#include <stdio.h>
int main()
{   int i, j, row, column;
   // printf("Enter the value of r1, c1, r2, c2(value of c1 and r2 should be equal)=\n");
    scanf("%d", &row);
    scanf("%d", &column);
    int a[row+1][column+1];
   // int b[column][row];
   // printf("Enter matrix a\n");
    for ( i = 1; i <= row; i++)
    {
        for ( j = 1; j <= column; j++)
        {
            scanf("%d", &a[i][j]);
            //b[j][i]=a[i][j];
        }
    }
    if(row==1)
    {
        for ( j = 1; j <= column; j++)
        {
            printf("%d ", a[1][j]);
        }
    }
    else if(column==1 && row!=1)
    {
        for ( i = 1; i <= row; i++)
        {
            printf("%d ", a[i][1]);
        }
    }
    else if(column!=1 && row!=1)
    {
    i=1;
    j=1;
    while (j<=column)
    {
        printf("%d ", a[i][j]);
        j++;
    }
    j=column;
    i=2;
    while (i<=row)
    {
        printf("%d ", a[i][j]);
        i++;
    }
    j=column-1;
    i=row;
    while (j>=1)
    {
        printf("%d ", a[i][j]);
        j--;
    }
    j=1;
    i=row-1;
    while (i>1)
    {
        printf("%d ", a[i][j]);
        i--;
    }
    
    }
   
     
    return 0;
}