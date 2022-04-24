#include<stdio.h>
int main()
{
    int n,sq,r=1,temp;
    scanf("%d",&n);
    sq=n*n;
    temp=n;
    while(n>0)
    {  
       r=r*10;    
       n=n/10;
    }
       if(sq%r==temp)
       {
           printf("Automorphic Number");
       }
       else
       {
           printf("Not an Automorphic Number");
       }
       return 0;
}