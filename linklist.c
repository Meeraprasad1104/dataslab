#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
 {
 int data;
 struct node *next;
 };
 struct node *head;
void insert_at_beg();
void insert_inbetween();
void insert_at_end();
void display();
void del_at_beg();
void del_inbetween();
void del_at_end();
	void main()
 	{
	 int choice;
	 do
  	{
  
  	printf ("\n\t\t\t\t\t Link List ");
  	printf ("\n\t 1. Insert at begining\n\t 2. Insert inbetween \n\t 3. Inset at end ");
 	 printf ("\n\t 4. Delete from begining \n\t 5. Inbetween Deletion \n\t 6. Delete from end ");
 	 printf ("\n\t 7. Display \n\t 8. Exit  ");
 	 printf ("\n\n\t Select an operation : ");
  	scanf ("%d",&choice);
  		switch(choice)
  		 {
   		case 1:insert_at_beg();
	  		break;
   		case 2:insert_inbetween();
	  		break;
   		case 3:insert_at_end();
	  		break;
   		case 4:del_at_beg();
			  break;
  		 case 5:del_inbetween();
	 		 break;
 		  case 6:del_at_end();
	  		break;
   		case 7:display();
	  		break;
   		case 8:printf ("\n\t Program is exiting....");
	  	getch();
		  break;
   default:printf ("\n\t invalid choice \n\t Try again");
	  getch();
   }
  }
 while(choice!=8);
 }
void insert_at_beg()
 {
 struct node *new_node;
 new_node=(struct node*)malloc(sizeof(struct node));
 printf ("\n\t Enter the element to insert : ");
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
 display();
 }
void display()
 {
 struct node *trav;
 trav=head;
 if (head==NULL)
 {
  printf("\n\t LinkList Empty");
 }
 else
 {
 printf ("\n Link List : ");
 while(trav->next!=NULL)
  {
  printf("\t %d ",trav->data);
  trav=trav->next;
  }
 printf("\t %d ",trav->data);
 }
 getch();
 }
void insert_at_end()
 {
 struct node *new_node,*trav;
 new_node=(struct node*)malloc(sizeof(struct node));
 printf ("\n\t Enter the element to insert : ");
 scanf ("%d",&new_node->data);
 if (head==NULL)
  {
  head=new_node;
  head->next=NULL;
  }
 else
  {
  trav=head;
  while(trav->next!=NULL)
   {
   trav=trav->next;
   }
  trav->next=new_node;
  new_node->next=NULL;
  }
 display();
 }
void insert_inbetween()
 {
 struct node *new_node,*trav;
 int pos,i;
 new_node=(struct node*)malloc(sizeof(struct node));
 trav=head;
 printf ("\n\t Enter the element to insert : ");
 scanf ("%d",&new_node->data);
 	if (head==NULL)
  	{
 	 head=new_node;
  	head->next=NULL;
  	}
 	else
  	{
  	printf ("\n\t Enter the position to insert : ");
  	scanf ("%d",&pos);
  
   	for (i=1;i<pos-1;i++)
    	{
    	trav=trav->next;
    	}
   	new_node->next=trav->next;
   	trav->next=new_node;
   
  	}
 display();
 }
void del_at_beg()
 {
 struct node *temp;
 temp=head;
 head=head->next;
 free(temp);
 display();
 }
void del_at_end()
 {
 struct node *temp,*temp1;
 temp=head;
 if(head==NULL)
 {
  printf("\n\t LinkList Empty");
 }
 else
 {
  while(temp->next->next!=NULL)
   {
   temp=temp->next;
   }
  temp1=temp->next;
  temp->next=NULL;
  free(temp1);
 }
 display();
 }
void del_inbetween()
 {
 struct node *temp,*temp1;
 int i,pos;
 temp=head;
 printf ("\n\t Enter the position of the element to delete : ");
 scanf ("%d",&pos);
 if (pos==1)
  {
  head=head->next;
  free(temp);
  }
 else
  {
  for (i=1;i<pos-1;i++)
   {
   temp=temp->next;
   }
  temp1=temp->next;
  temp->next=temp1->next;
  free(temp1);
  }
 display();
 }








