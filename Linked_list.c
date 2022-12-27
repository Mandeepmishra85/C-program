//Program of Linked-List
#include <stdio.h>
#include <stdlib.h>
//#include <malloc.h>

struct node
{
    int info;
    struct node *next;
};
struct node *head=NULL;
struct node *ptr;
struct node *newnode;

//Ins-Begin
int insbegin()
{
    //create();
    int data;
    // struct node *newnode, *ptr;
    newnode = malloc(sizeof(struct node));

//    if (newnode == NULL) {
//        printf("Out of memory:");
//        exit(0);
//    }
    printf("Enter the data for the node:");

    scanf("%d",&newnode->info);
    //newnode->next = NULL;
    if (head == NULL)
    {
        head = newnode;
    }
    else
    {
       ptr = head;
       newnode->next=ptr;
       head=newnode;
    }

    return 0;
}
//Ins-End
int insend()
{

    //create();
    // struct node *newnode, *ptr;
    newnode = malloc(sizeof(struct node));

//    if (newnode == NULL) {
//        printf("Out of memory:");
//        exit(0);
//    }
    printf("Enter the data for the node:");

    scanf("%d",&newnode->info);
    //newnode->next = NULL;
    if (head == NULL)
    {
        head = newnode;
    }
    else
    {
        ptr=head;
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->next=newnode;
    }
    //newnode->info=data;
    newnode->next=NULL;
    return 0;
}
//ins-specified
int insspecific(int pos)
{
    int j;
    //struct *ptr;
    //create();
    // struct node *newnode, *ptr;
    newnode = malloc(sizeof(struct node));

//    if (newnode == NULL) {
//        printf("Out of memory:");
//        exit(0);
//    }
    printf("Enter the data for the node:");

    scanf("%d",&newnode->info);
    //newnode->next = NULL;
    // if (head == NULL)
    // {
    //     head = newnode;
    // }
    // else
    // {
    //     ptr=head;
    //     while(ptr->next!=NULL)
    //     {
    //         ptr=ptr->next;
    //     }
    //     ptr->next=newnode;
    // }
    ptr=head;
    for(j=0;j<pos-1;j++)
    {
        ptr=ptr->next;
        if(ptr==NULL)
        {
            printf("Invalid position");
            exit(0);
        }
    }
    newnode->next=ptr->next;
    ptr->next=newnode;
    return 0;
}
//deletion beginning
int delbeign()
{
    //struct node *ptr;
    ptr=head;
    if(ptr==NULL)
    {
        printf("List is empty");
    }
    else
    {
        head=head->next;
        printf("Deleted node info=%d",head->info);
        free(ptr);
    }
    return 0;
}
//Deletion end
int delend()
{
    struct node *temp;
    ptr=head;
    if(ptr==NULL)
    {
        printf("List is empty");
    }
    else if((head->next)==NULL)
    {
        head=NULL;
        printf("The deleted element->%d",ptr->info);
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
        printf("The deleted element is->%d",ptr->info);
    }
    free(ptr);
    return 0;
}
//Deletion at specified
int delspecified(int pos)
{
    int i;
    struct node *temp;
    if(head==NULL)
    {
        printf("The list is empty");
        exit(0);
    }
    else if(pos==0)
    {
        ptr=head;
        head=head->next;
        printf("the deleted=%d",ptr->info);
        free(ptr);
    }
    else
    {
        ptr=head;
        for(i=0;i<pos-1;i++)
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
    }
    printf("The deleted number is %d=",ptr->info);
    free(ptr);
    return 0;
}
void display()
{
    int i=0;
    //struct node *ptr;
    ptr=head;
    while(ptr->next!=NULL)
    {

        printf("node[%d]->info=%d", i, ptr->info);
        i=i+1;
    }
}
char prompt()
{
    char z;
    printf("Press <1> for create node\nPress <2> t0 insert node in begin\nPress <3> for insert node in end\nPress <4> for insert node in specified"
           "\nPress <5> to del node in begin\nPress <6> to del node in end\nPress <7> to del node in specified--->");
    scanf("%c",&z);
    return z;
}
int main()
{
    int pos;
    char status,check;
    status=prompt();
    switch(status)
    {
        case '1':
            //up:
            //create();


//            if (newnode == NULL) {
//                printf("Out of memory:");
//                exit(0);
//            }
            printf("Enter the data for the node:");

            scanf("%d",&newnode->info);
            //newnode->next = NULL;
            if (head == NULL)
            {
                head = newnode;
            }
            else
            {
                ptr=head;
                while(ptr->next!=NULL)
                {
                    ptr=ptr->next;
                }
                ptr->next=newnode;
            }


            display();
            break;
        case '2':
            //create();
            printf("Your Decision goes to insert in first\n");
            insbegin();
            display();
            break;
        case '3':
            insend();
            printf("Your Decision goes to insert in end\n");
            display();
            break;
        case '4':
            printf("enter the position");
            scanf("%d",&pos);
            printf("Your Decision goes to insert in specific\n");
            insspecific(pos);
            display();
            break;
        case '5':
            printf("Your decision goes to delete in first\n");
            delbeign();
            display();
            break;
        case '6':
            printf("Your decision goes to delete in end\n");
            delend();
            display();
            break;
        case '7':
            printf("Your decision goes to delete in position\n");
            printf("enter the position");
            scanf("%d",&pos);
            delspecified(pos);
            display();
            break;
    }
    return 0;
}
