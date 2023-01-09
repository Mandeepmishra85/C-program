//
// Created by Mandeep Mishra on 09/01/2023.
//
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *next;
    struct node *prev;
};
struct node *head=NULL;
struct node *ptr;
struct node *newnode;
struct node *temp;
int insbegin()
{

    int data;

    newnode =(struct node*)malloc(sizeof(struct node));
    printf("Enter the data for the node:");

    scanf("%d",&newnode->info);
    getchar();
    //newnode->next = NULL;
    if (head == NULL)
    {
        head = newnode;
        head->prev= NULL;
        head->next =NULL;
    }
    else
    {
        ptr = head;
        newnode->prev = NULL;
        newnode->next = ptr;
        ptr->prev=newnode;
        head=newnode;
    }
    return 0;
}
int insend()
{
    newnode =(struct node*)malloc(sizeof(struct node));
    printf("Enter the data for the node:");
    scanf("%d",&newnode->info);
    getchar();
    if (head == NULL)
    {
        head = newnode;
        head->prev= NULL;
        head->next = NULL;
    }
    else
    {
        ptr=head;
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        newnode->prev =ptr;
        ptr->next=newnode;
        newnode->next=NULL;
    }

    return 0;
}
int insspecific(int pos)
{
    int j;
    newnode =(struct node*)malloc(sizeof(struct node));
    printf("Enter the data for the node:");
    scanf("%d",&newnode->info);
    getchar();

    ptr=head;
    for(j=1;j<pos-1;j++)
    {
        ptr=ptr->next;
        if(ptr==NULL)
        {
            printf("Invalid position");
            exit(0);
        }
    }
    newnode->next=ptr->next;
    newnode->prev=ptr;
    ptr->next->prev=newnode;
    ptr->next=newnode;
    return 0;
}
int delbeign()
{
    ptr=head;
    if(ptr==NULL)
    {
        printf("List is empty");
    }
    else
    {
        printf("Deleted node info=%d\n",head->info);
        head=head->next;
        head->prev=NULL;
        //printf("Deleted node info=%d\n",head->info);
        printf("Remaining Nodes;\n");
        free(ptr);
    }
    return 0;
}
int delend()
{
    //struct node *temp;
    ptr=head;
    if(ptr==NULL)
    {
        printf("List is empty");
    }
    else if((head->next)==NULL)
    {
        printf("Deleted node info=%d\n",head->info);
        head=NULL;
        //head->prev=NULL;
        //printf("Deleted node info=%d\n",head->info);
        printf("Remaining Nodes;\n");
        free(ptr);
        exit(0);
    }
    else
    {
        while(ptr->next!=NULL)
        {
            temp = ptr;
            ptr=ptr->next;
        }
        temp->next=NULL;
        printf("Deleted node info=%d\n",ptr->info);
        printf("Remaining Nodes;\n");
        free(ptr);
    }

    return 0;
}
int delspecified(int pos)
{
    int i;
    //struct node *temp;
    if(head==NULL)
    {
        printf("The list is empty");
        exit(0);
    }
    else if(pos==0)
    {
        ptr=head;
        head=head->next;
        head->prev= NULL;
        printf("Deleted node info=%d\n",ptr->info);
        printf("Remaining Nodes;\n");
        free(ptr);
    }
    else
    {
        ptr=head;
        for(i=0;i<pos;i++)
        {
            temp=ptr;
            ptr=ptr->next;
            if(ptr==NULL)
            {
                printf("position not found");
                exit(0);
            }
        }
        temp->next=ptr->next;
        ptr->next->prev=ptr->prev;
        printf("The deleted number is %d=",ptr->info);
        free(ptr);
    }


    return 0;
}
void display()
{
    int i=0;
    //struct node *ptr;
    system("clear");
    printf("Remaining Nodes;\n");
    ptr=head;
    while(ptr!=NULL)
    {

        printf("node[%d]->info=%d\n", i, ptr->info);
        ptr=ptr->next;
        i=i+1;
    }
}
char prompt()
{
    char z;
    printf("Press <1> to insert node in begin\nPress <2> for insert node in end\nPress <3> for insert node in specified"
           "\nPress <4> to del node in begin\nPress <5> to del node in end\nPress <6> to del node in specified--->\t");
    scanf("%c",&z);
    getchar();
    //system("clear");
    return z;
}
int main()
{
    int pos,data;
    char status,check;
    while(1)
    {
        status = prompt();
        switch (status) {
            case '1':
                //create();
                printf("Your Decision goes to insert in first\n");
                insbegin();
                system("clear");
                display();
                //system(clear);
                break;
            case '2':
                insend();
                printf("Your Decision goes to insert in end\n");
                display();
                break;
            case '3':
                printf("enter the position");
                scanf("%d", &pos);
                printf("Your Decision goes to insert in specific\n");
                insspecific(pos);
                display();
                break;
            case '4':
                printf("Your decision goes to delete in first\n");
                delbeign();
                display();
                break;
            case '5':
                printf("Your decision goes to delete in end\n");
                delend();
                display();
                break;
            case '6':
                printf("Your decision goes to delete in position\n");
                printf("enter the position->");
                scanf("%d",&pos);
                delspecified(pos);
                display();
                break;
            default:
                printf("Enter Again\n");
                break;
        }
    }
    return 0;
}
