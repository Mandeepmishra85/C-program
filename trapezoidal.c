//
// Created by Mandeep Mishra on 11/01/2023.
//
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float f(float a)
{
    return (pow(a,3)+1);
}
int main()
{
    int n,i;
    float a,b,h,I,sum=0.00;
    printf("Enter the Lower limit and Upper Limit--->");
    scanf("%f%f",&a,&b);
    h=b-a;
    I=h*0.5*(f(a)+f(b));
    printf("Simple I=%f",I);
    printf("\n");
    printf("Enter the number of strip-->");
    scanf("%d",&n);
    h=(b-a)/n;
    for(i=1;i<=n-1;i++)
    {
        sum=sum+f(a+(i*h));
    }
    I=h*0.5*(f(a)+f(b)+2*sum);
    printf("Composite I->%f",I);
    return 0;
}
