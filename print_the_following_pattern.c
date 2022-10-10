#include<stdio.h>
int main()
{
    int i,n,j;
    scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       for(j=0;j<n;j++)
       {
           if(i==n-1||j==0||i==j)
           {
               printf("*");
           }
           else
           {
               printf(" ");
           }
       }
       printf("
");
   }
}