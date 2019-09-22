#include<stdio.h>
void main()
{
    int i,j;
    int n,num;
    printf("Enter co-ordinate of the piramid to disappear\n");
    scanf("%d %d",&n,&num);
    for(i=1;i<=5;i++)
    {
      for(j=1;j<=9;j++)
      {
         if(j>=5-i && j<=3+i)
         {
            if(i==n && j==num)
            {
                  printf(" ");
            }
            else
            {
             printf("*");
            }
            
         }
         else
         {
             printf(" ");
         }
         
      }
      printf("\n");
    }
}
