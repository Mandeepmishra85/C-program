//
// Created by Mandeep Mishra on 28/12/2022.
//
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float f(float x)
{
    return pow(x,3)+pow(x,2)-1;
}

float g(float x)
{
    return 1/(pow(x+1,0.5));
}

int fdx(float x)
{
    return -1/(2* pow(x+1,1.5));
}

int main()
{
    float x0,e=0.001,x1,count;
    printf("Enter your initial guess between <0,1>\t");
    scanf("%f",&x0);
    do
    {
        x1=g(x0);
        count++;
        x0=x1;
        // if(fabs(f(x0))>e)
        // {
        //     exit(0);
        // }
    }
    while(fabs(f(x1))>e);
    printf("Root->%f",x1);
    return 0;
}

