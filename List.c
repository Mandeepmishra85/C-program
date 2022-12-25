#include <stdio.h>
#include <stdlib.h>
#define Maxsize 10
struct node
{
    int info,next;
};
struct node n[Maxsize];
int getnode()
{
    int p, i;
    printf("Enter the value to be put in list->\t\n--->");
    for (i = 0; i <= Maxsize - 1; i++) {
        scanf("%d",&n[i].info);
        printf("\n--->");
    }
    return 0;
}

int assign()
{
    int i;
    for (i = 0; i <= Maxsize - 1; i++)
    {
        n[i].next=i+1;
        //i=i-1;
    }
    n[Maxsize-1].next=-1;
    return 0;
}

int insafter(int a,int b)
{
    int temp1,temp2,i,status;
    if (a==-1 || a>=Maxsize)
    {
        printf("Invalid Position");
        exit(1);
    }
    temp1=n[a].info;
    //temp2=n[a].next;
    n[a].info=b;
    for(i=a+1;i<Maxsize;i++)
    {
        temp2=n[i].info;
        n[i].info=temp1;
        temp1=temp2;
    }
    return 0;
}

int freenode(int pos)
{
    int temp1,temp2,i;
    temp1=n[pos].info;
    printf("The value to be deleted->%d",temp1);
    for(i=pos;i<Maxsize-1;i++)
    {
        n[i].info=n[i+1].info;
    }
    n[Maxsize-1].info=-1;
    printf("\n");
    return 0;
}
int display()
{
    int i;
    for(i=0;i<Maxsize;i++)
    {
        printf("n[%d].info->%d\n",i,n[i].info);
    }
    printf("\n");
    for(i=0;i<Maxsize;i++)
    {

        printf("n[%d].next->%d\n",i,n[i].next);
    }
    printf("\n");
    return 0;
}
char prompt()
{
    char z;
    printf("Press <1> for Getnode\nPress <2> tp freenode\nPress <3> for Insafter\nPress <4> for to display\n--->");
    scanf("%c",&z);
    return z;
}
int main()
{
    int i,n1,n2,n3,a,a1,a2;
    char status;
    while(1)
    {
        status=prompt();
        switch(status) {
            case '1':
                n1 = assign();
                n2 = getnode();
                display();
                getchar();
                break;
            case '2':
                printf("Enter the position");
                scanf("%d", &a);
                n3 = freenode(a);
                display();
                getchar();
                break;
            case '3':
                printf("Enter the position and data respec.->");
                scanf("%d%d", &a1, &a2);
                insafter(a1, a2);
                display();
                getchar();
                break;
            case '4':
                display();
        }
    }
    return 0;
}
