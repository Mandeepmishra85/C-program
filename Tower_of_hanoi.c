//
// Created by Mandeep Mishra on 08/02/2023.
//
#include <stdio.h>
#include <stdlib.h>
int i=1;

void TOH(int a, char top , char dest ,char aux)
{
    if (a == 1) {
        printf("Move disk 1 from peg %c to peg%c", top, dest);
        return;
    } else {
        TOH(a - 1, top, aux, dest);
        printf("\nMove disk %d from peg %c to peg %c\n", a, top, dest);
        TOH(a - 1, aux, dest, top);
    }
}
int main()
{
    int n;
    printf("Enter the number of disks->> \n (Note: Do not put higher values)");
    scanf("%d",&n);
    TOH(n,'A','C','B');
    printf("\nFinished\n");
    return 0;

}
