#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
 {
 int data;
 struct node *next;
 }*head;
int limit,count=-1;
void push();
void pop();
void display();
void search();
void main()
 {
 int choice;
 
 printf ("\n\t Enter the limit of the stack : ");
 scanf ("%d",&limit);
 do
  {
 
  printf ("\n\t\t\t STACK OPERATIONS ");
  printf ("\n\t 1. Push \n\t 2. Pop \n\t 3. Display \n\t 4. Search \n\t 5. Exit ");
  printf ("\n\t Select an operation : ");
  scanf ("%d",&choice);
  switch(choice)
   {
   case 1:push();
	break;
   case 2:pop();
	break;
   case 3:display();
	break;
   case 4:search();
	break;
   case 5:printf ("\n\t Program is exiting... ");
	break;
   default:
	printf ("\n\t Invalid choice \n\t Try again ");
   }
  getch();
  }
 while(choice!=5);
 }
void push()
 {
 struct node *new_node;
 new_node=(struct node*)malloc(sizeof(struct node));
 if (count==limit-1)
  {
  printf("\n\t Stack Overflow");
  }
 else
  {
  count++;
  printf("\n\t Enter the element to insert : ");
  scanf ("%d",&new_node->data);
  if (head==NULL)
   {
   head=new_node;
   head->next=NULL;
   }
  else
   {
   new_node->next=head;
   head=new_node;
   }
  }
 display();
 }
void display()
 {
 if (count==-1)
  {
  printf ("\n\t Stack empty ");
  }
 else
  {
  struct node *trav;
  trav=head;
  printf ("\n\t Stack : ");
  while (trav->next!=0)
   {
   printf ("\n\t %d ",trav->data);
   trav=trav->next;
   }
  printf ("\n\t %d ",trav->data);
  }
 }
void pop()
 {
 if (count==-1)
  {
  printf("\n\t Stack Underflow ");
  }
 else
  {
  struct node *temp;
  count--;
  temp=head;
  head=head->next;
  free(temp);
  }
 display();
 }
void search()
 {
 if (count==-1)
  {
  printf ("\n\t Stack empty \n\t Nothing to search ");
  }
 else
  {
  int flag=0,var;
  struct node *trav;
  trav=head;
  printf ("\n\t Enter the element to search : ");
  scanf ("%d",&var);
  while (trav->next!=NULL)
   {
   if (trav->data==var)
    {
    flag=1;
    }
   trav=trav->next;
   }
  if (trav->data==var)
    flag=1;
  if (flag==1)
    {
    printf("\n\t Element is present in the stack ");
    }
  else
    {
    printf("\n\t Element is not present in the stack ");
    }
  }
 }






