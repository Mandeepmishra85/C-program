//
// Created by Mandeep Mishra on 11/01/2023.
//
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float f(float x)
{
    return (pow(x,3)+1);
}
int main()
{
    system("clear");
    int n,i,j=0;
    float I,h1,h2,sum1,sum2,a,b;
    printf("Enter the lower and Upper limit");
    scanf("%f%f",&a,&b);
    h1=(b-a)/2;
    I=(h1/3)*(f(a)+(4*f((a+b)/2))+f(b));
    printf("Simple Simpson 1/3 I->>%f",I);
    printf("\nEnter the number of strips->>");
    scanf("%d",&n);
    h2=(b-a)/n;

    for(i=1;i<=n-1;i=i+2)
    {
        j=j+2;
        sum1=sum1+f(a+(i*h2));
        sum2=sum2+f(a+(j*h2));

    }
    I=(h2/3)*(f(a)+(4*sum1)+(2*sum2)+f(b));
    printf("Composite Simpson 1/3 I->>%f",I);
}
