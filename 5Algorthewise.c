#include <stdio.h>
int main()
{   int i, j,num, count1=0, count2=0, check1, check2;
    //printf("Enter the value of r1, c1, r2, c2(value of c1 and r2 should be equal)=\n");
    scanf("%d", &num);
    int mat[num+1][num+1];
    int target[num+1][num+1];
    int dup[num+1][num+1];
    //int dup2[num+1][num+1];
   // int dup3[num+1][num+1];
    
    for ( i = 1; i <= num; i++)
    {
        for ( j = 1; j <= num; j++)
        {   
            scanf("%d", &mat[i][j]);
            if(mat[i][j]==0)
            count2++;
            dup[(num+1)-j][i]=mat[i][j];
           // dup2[j][i]=mat[i][j];
        }
        
    }

    for ( i = 1; i <= num; i++)
    {
        for ( j = 1; j <= num; j++)
        {   
            scanf("%d", &target[i][j]);
            if(target[i][j]==0)
            count1++;
        }
    }
    if(count1!=count2)
    printf("NO");
    else
    {  check1=1, check2=1;
       for ( i = 1; i <= num; i++)
      {
        for ( j = 1; j <= num; j++)
        {   
            if(mat[i][j]!=target[i][j])
            {check1=0;
              }
            if(dup[i][j]!=target[i][j])
            {check2=0;
              }
        }
      }
      if(check1==1 || check2==1)
      printf("YES");
      else
      {
         for ( i = 1; i <= num; i++)
        {
        for ( j = 1; j <= num; j++)
        {   
           
            mat[(num+1)-j][i]=dup[i][j];
        }
        }
        check1=1, check2=1;
        for ( i = 1; i <= num; i++)
        {
        for ( j = 1; j <= num; j++)
        {   
            if(mat[i][j]!=target[i][j])
            {check1=0;
             break; }
            
        }
        }
        if(check1==1)
        printf("YES");
        else
        {
          for ( i = 1; i <= num; i++)
          {
          for ( j = 1; j <= num; j++)
          {   
            dup[(num+1)-j][i]=mat[i][j];
          }
          }
          check1=1, check2=1;
          for ( i = 1; i <= num; i++)
          {
          for ( j = 1; j <= num; j++)
          {   
            if(dup[i][j]!=target[i][j])
            {check1=0;
             break; }
            
          }
          }
            if(check1==1)
            printf("YES");
            else if(check1==0)
            printf("NO");
        }
      }
      
    }
    
     
    return 0;
}