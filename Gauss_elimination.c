//
// Created by Mandeep Mishra on 25/01/2023.
//
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int i,j,n,k;
    float ratio,xn;
    float A[50][50],X[50];
    printf("Enter the number \t");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n+1;j++)
        {
            printf("A[%d][%d]-->",i,j);
            scanf("%f",&A[i][j]);
            printf("\n");
        }
    }
    for(i=1;i<=n-1;i++)
    {
        if(A[i][i]==0)
        {
            printf("Mathematical Error");
            exit(0);
        }
        for(j=i+1;j<=n;j++)
        {
            ratio=A[j][i]/A[i][i];
            for(k=1;k<=n+1;k++)
            {
                A[j][k]=A[j][k]-ratio*A[i][k];
            }
        }
    }
    X[n]=A[n][n+1]/A[n][n];
    for(i=n-1;i>=1;i--)
    {
        X[i]=A[i][n+1];
        for(j=i+1;j<=n;j++)
        {
            X[i]=X[i]-A[i][j]*X[j];
        }
        X[i]=X[i]/A[i][i];
    }
    for(i=1;i<=n;i++)
    {
        printf("X[%d]->%f\n",i,X[i]);
    }
    return 0;
}
