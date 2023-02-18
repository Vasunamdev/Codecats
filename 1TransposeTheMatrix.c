#include <stdio.h>
int main()
{   int i, j, row, column;
    //printf("Enter the value of r1, c1, r2, c2(value of c1 and r2 should be equal)=\n");
    scanf("%d", &row);
    scanf("%d", &column);
    int a[row][column];
    int b[column][row];
   // printf("Enter matrix a\n");
    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < column; j++)
        {
            scanf("%d", &a[i][j]);
            b[j][i]=a[i][j];
        }
    }
    
  
    for ( i = 0; i < column; i++)
    {
        for ( j = 0; j < row; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
     
    return 0;
}