//
// Created by Mandeep Mishra on 28/12/2022.
//
//x2-4x-10
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float f(float x)
{
    return (pow(x,2)-4*x-10);
}
 int main()
 {
    float f1,f2,x1,x2,x0,e=0.001,f0;
     up:
    printf("Enter two intial guesses\t");
    scanf("%f%f",&x1,&x2);
     f1=f(x1);
     f2=f(x2);
    if(f1*f2<0)
    {
        do
        {
        x0=((x1*f2)-(x2*f1))/(f2- f1);
        f0=f(x0);
           if((f1*f0)<0)
           {
              x2=x0;
              f2=f0;
           }
           else
            {
               x1=x0;
               f1=f0;
            }
        }
        while((fabs(f0))>e);
    }
    else
    {
        printf("Wrong guess\n");
        goto up;
    }
    printf("Root->%f\t",x0);
    return 0;
 }
