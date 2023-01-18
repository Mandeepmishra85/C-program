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
int main() {
    int i, n, n1;
    float xo, xn, y, h, f0,m1,m2;
    printf("Enter the vaules for x and y");
    scanf("%f%f",&xo,&y);
    printf("Enter the value for xn-->");
    scanf("%f",&xn);
    printf("For h = ???");
    scanf("%f",&h);
    n=(xn-xo)/h;
    for(i=0;i<n;i++)
    {
        m1=f(xo);
        m2=f((xo+h));
        y=y+h/2*(m1+m2);
        xo=xo+h;
    }
    printf("\nx=%f and y=%f",xo,y);
    return 0;
}
