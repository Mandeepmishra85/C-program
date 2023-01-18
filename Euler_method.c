//
// Created by Mandeep Mishra on 18/01/2023.
//
#include <stdio.h>
#include <stdio.h>
#include <math.h>
float f(float x)
{
    return((3*pow(x,2))+1);
}
int main()
{
    int i,n,n1;
    float xo,xn,y,h,f0;
    printf("Enter the value for xo-->");
    scanf("%f",&xo);
    printf("Enter the value for y-->");
    scanf("%f",&y);
    printf("Enter the value for xn-->");
    scanf("%f",&xn);
    printf("For h = ???");
    scanf("%f",&h);
    n=(xn-xo)/h;
    for(i=0;i<n;i++)
    {
        f0=f(xo);
        y=y+h*f0;
        xo=xo+h;
    }
    printf("\nx=%f and y=%f",xo,y);

    return 0;
}
