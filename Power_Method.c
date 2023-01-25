//
// Created by Mandeep Mishra on 25/01/2023.
//
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int r,c,i,j,n;
    float e,temp,lamda_old,lamda_new;
    float A[50][50],x1[10];
    float x[3]={0,1,0};
    printf("Enter the order of matrix\n");
    scanf("%d%d",&r,&c);
    printf("Enter tolerable error\n");
    scanf("%f",&e);
    printf("Enter the value of n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("A[%d][%d]-->",i,j);
            scanf("%f",&A[i][j]);
        }
    }
    lamda_old=1;
    up:   for(i=1;i<=n;i++)
    {
        temp=0.0;
        for(j=1;j<=n;j++)
        {
            temp=temp+A[i][j]*x[j];
        }
        x1[i]=temp;
    }
    for(i=0;i<=n;i++)
    {
        x[i]=x1[i];
    }
    //finding largest
    lamda_new=fabs(x[1]);
    for(i=2;i<=n;i++)
    {
        if((fabs(x[i]))>lamda_new)
        {
            lamda_new=fabs(x[i]);
        }
    }
    for(i=1;i<=n;i++)
    {
        x[i]=x[i]/lamda_new;
    }
    printf("%f\t",lamda_new);
    printf("\n");
    for(i=1;i<=n;i++)
    {

        printf("x[%d]-->%f\n",i,x[i]);
    }
    //checking accuracy
    if((fabs(lamda_new-lamda_old))>e)
    {
        lamda_old=lamda_new;
        goto up;
    }
    return 0;
}
