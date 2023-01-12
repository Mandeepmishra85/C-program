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
    h1=(b-a)/3;
    I=(3*h1/8)*(f(a)+(3*f((a+h1)))+(3*f(a+2*h1))+f(b));
    printf("Simple Simpson 3/8 I->>%f",I);
    printf("\nEnter the number of strips->>");
    scanf("%d",&n);
    h2=(b-a)/n;

    for(i=1;i<=n-1;i++)
    {

        if(i%3!=0)
        {
            sum1 = sum1 + f(a + (i * h2));
        }
        else{
            sum2=sum2+f(a+(i*h2));
        }

    }
    I=(3*h2/8)*(f(a)+(3*sum1)+(2*sum2)+f(b));
    printf("Composite Simpson 3/8 I->>%f",I);
    return 0;
}
