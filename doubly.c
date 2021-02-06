#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void insert_at_beg();
void insert_inbet();
void insert_at_end();
void del_at_beg();
void del_at_end();
void del_inbet();
void search();
void display();

struct node
{
    int data;
    struct node *next;
    struct node *prev;
}*start;
void main()
{
    int x,y;
    do
    {
        printf("\nDOUBLY LINKEDLIST");
        printf("\n1.insertion\n2.deletion\n3.searching \n4.display\n5.exit");
        printf("\nselect an option=");
        scanf("%d",&x);
        switch(x)
        {
            case 1:system("cls");
             printf("\nDOUBLY LINKEDLIST");
             printf("\n1.insert at begining");
             printf("\n2.insert inbetween");
             printf("\n3.insert at end");
             printf("\nselect option=");
             scanf("%d",&y);
             switch(y)
             {
                 case 1:insert_at_beg();
                 display();
                 break;
                 case 2:insert_inbet();
                 display();
                 break;
                 case 3:insert_at_end();
                 display();
                 break;
                 default:printf("\ninvalid");
                 getch();
             }
             break;
             case 2:system("cls");
             printf("\nDOUBLY LINKEDLIST");
             printf("\n1.deletion at begining");
             printf("\n2.deletion in between");
             printf("\n3.deletion at end");
             printf("\nselect option=");
             scanf("%d",&y);
             switch(y)
             {
                case 1:del_at_beg();
                display();
                break;
                case 2:del_inbet();
                display();
                break;
                case 3:del_at_end();
                display();
                break;
                default:printf("\ninvalid");
                getch();
            }
            break;
            case 3:search();
            getch();
            break;
            case 4:display();
            break;
            case 5:printf("\nexit");
            break;
            default:printf("\ninvalid choice");
            getch();
        }
    }
    while(x!=5);
    getch();
}
void insert_at_beg()
{
    struct node *new_node;
    new_node=(struct node*)malloc(sizeof(struct node));
    printf("\nenter elements to be insert=");
    scanf("%d",&new_node->data);
    if(start==NULL)
    {
        start=new_node;
        new_node->next=NULL;
        new_node->prev=NULL;
    }
    else
    {
        new_node->next=start;
        start->prev=new_node;
        start=new_node;
    }
}
void display()
{
    struct node *trav;
    trav=start;
    if(start==NULL)
    {
        printf("\n linked list empty");
    }
    else
    {
        printf("\nlink list");
        while(trav->next!=NULL)
        {
            printf("\t%d",trav->data);
            trav=trav->next;
        }
        printf("\t%d",trav->data);
    }
    getch();
}
void insert_at_end()
{
    struct node *new_node,*temp;
    new_node=(struct node*)malloc(sizeof(struct node));
    temp=start;
    printf("\n enter the elemnts to be insert=");
    scanf("%d",&new_node->data);
    if(start==NULL)
    {
        start=new_node;
        new_node->next=NULL;
    }
    else
    {
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=new_node;
        new_node->next=NULL;
        new_node->prev=temp;
    }
}
void insert_inbet()
{
    int pos,i;
    struct node *temp,*temp1,*new_node;
    new_node=(struct node*)malloc(sizeof(struct node));
    temp=start;
    printf("\n\t enter position to be insert=");
    scanf("%d",&pos);
    if(pos==1)
    {
        insert_at_beg();
    }
    else
    {
        for(i=0;i<pos-2;i++)
        {
            temp=temp->next;
            if(temp!=NULL)
            break;
        }
        if(i!=pos-2)
        {
            printf("\n cannot perform insertion operation at the posititon");
        }
        else
        {
            if(temp->next==NULL)
            {
                insert_at_end();
            }
            else
            {
                printf("\nenter the elements to be inserted=");
                scanf("%d",&new_node->data);
                temp1=temp->next;
                new_node->next=temp1;
                new_node->prev=temp;
                temp1->prev=new_node;
                temp->next=new_node;
            }
        }
    }
}
void del_at_beg()
{
    struct node  *temp;
    temp=start;
    if(start!=NULL)
    {
        printf("\n\t %d is deleted",temp->data);
        start=start->next;
        if(start!=NULL)
        {
        start->prev=NULL;
        }
        free(temp);
    }
}
void del_at_end()
{
    struct node *temp,*trav;
    temp=start;
    if(start!=NULL)
    {
        if(start->next==NULL)
        {
            printf("\n\t%d is deleted",temp->data);
            start=start->next;
            free(temp);
        }
        else
        {
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            trav=temp->prev;
            trav->next=NULL;
            printf("\n%d is deleted",temp->data);
            free(temp);
        }
    }
}
void  del_inbet()
{
    int i,pos;
    struct node *temp,*temp1,*temp2;
    temp=start;
    printf("\n enter the position of the element delete=");
    scanf("%d",&pos);
    if(pos==1)
    {
        del_at_beg();
    }
    else
    {
        for(i=0;i<pos-1;i++)
        {
            temp=temp->next;
            if(temp==NULL)
            break;
        }
        if(temp==NULL)
        {
            printf("\nelement not found in the specified location");
        }
        else if(temp->next==NULL)
        {
            temp1=temp->prev;
            temp1->next=NULL;
            printf("\n%d is deleted",temp->data);
            free(temp);
        }
        else
        {
            temp2=temp->next;
            temp1=temp->prev;
            temp1->next=temp2;
            temp2->prev=temp1;
            printf("\n%d id deleted",temp->data);
            free(temp);
        }
    }
}
void search()
{
    int flag=-1,num;
    struct node *trav;
    trav=start;
    if(start==NULL)
    {
        printf("\n there is no element in the linked lis for searching");
    }
    else
    {
        printf("\n enter the element to search=");
        scanf("%d",&num);
        while(trav->next!=NULL)
        {
            if(trav->data==num)
            flag=1;
            trav=trav->next;
        }
        if(trav->data==num)
        {
            flag=1;
        }
            if(flag==1)
            printf("\n enter the element is present in the list");
            else
            printf("\n enter the element is not present in the list");

    }
    

}
