#include <stdio.h>
int main()
{   int i, j, add=0,num, start, end;
    
    scanf("%d", &num);
   
    int a[num+1][num+1];
    end=num;
    start=1;
    for ( i = 1; i <= num; i++)
    {
        for ( j = 1; j <= num; j++)
        {  
            scanf("%d", &a[i][j]);
           // printf("%d ", k);
           if(i==j)
           add+=a[i][j];
        }
        if(start!=end)
        add+=a[start][end];
        start++;
        end--;
    }
     printf("%d", add);
    return 0;
}