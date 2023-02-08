//
// Created by Mandeep Mishra on 08/02/2023.
//
#include <stdio.h>
#include <stdlib.h>
int hcf(int n1, int n2)
{
   if(n2==0)
   {
       return n1;
   }
    else
   {
        hcf(n2,n1%n2);
   }
}
int main()
{
    int a,b,n;
    printf("Enter two number ->>");
    scanf("%d%d",&a,&b);
    n= hcf(a,b);
    printf("The highest common factor ->> %d",n);
    return 0;
}
