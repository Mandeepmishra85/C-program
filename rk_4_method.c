//
// Created by Mandeep Mishra on 18/01/2023.
//
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
    int i, n;
    float xo, xn, y, h, f0,m1,m2,m3,m4;
    printf("Enter the vaules for x and y->\t");
    scanf("%f%f",&xo,&y);
    printf("Enter the value for xn-->");
    scanf("%f",&xn);
    printf("For h = ???->");
    scanf("%f",&h);
    n=(xn-xo)/h;
    for(i=0;i<n;i++)
    {
        m1=f(xo);
        m2=f((xo+h/2));
        m3=f((xo+h/2));
        m4=f((xo+h));
        y=y+((m1+2*m2+2*m3+m4)/6)*h;
        xo=xo+h;
    }
    printf("\nx=%f and y=%f",xo,y);
    return 0;
}
