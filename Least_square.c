//
// Created by Mandeep Mishra on 11/01/2023.
//
#include <stdio.h>
#include <stdlib.h>
int main()
{
    system("clear");
    float a,b;
    int n,i;
    printf("Enter the no. of data ->");
    scanf("%d",&n);
    float x[n],y[n],sumx=0,sumxx=0,sumy=0,sumxy=0;
    printf("Enter the values\n");
    for(i=0;i<n;i++)
    {
        printf("x[%d]->\t",i);
        scanf("%f",&x[i]);

        printf("y[%d]->\t",i);
        scanf("%f",&y[i]);
        printf("\n");
    }
    for(i=0;i<n;i++)
    {
        sumxx=sumxx+x[i]*x[i];
        sumx=sumx+x[i];
        sumxy=sumxy+x[i]*y[i];
        sumy=sumy+y[i];
    }
    b=(n*sumxy-sumx*sumy)/(n*sumxx-sumx*sumx);
    a=(sumy-b*sumx)/n;
    system("clear");
    printf("a=%f\t",a);
    printf("b=%f\t",b);
    return 0;
}
