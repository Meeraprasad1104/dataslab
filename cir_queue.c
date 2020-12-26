#include<stdio.h>
#include<stdlib.h>
#define N 10
void insert();
void delete();
void display();
void search();
int quar[100];
int rear=-1;
int front=-1;
int cqueue[N];
int choice,x;
int main()
{
		
	  printf(" 1.inserting element to the queue\n");
	  printf(" 2.deleting element to the queue\n");
	  printf(" 3.display element to the queue\n");
	  printf(" 4.serach the element to the queue\n");
	  printf(" 5.exit\n");
	do
	{
 	 printf("\nenter your choice=\n");
 	 scanf("%d",&choice);
	switch(choice)
	{
	   case 1:insert();
		  break;
	   case 2:delete();
		  break;
	   case 3:display();
		  break;
	   case 4:search();
		  break;
	   case 5:exit(0);
	   default:
	   printf("wrong choice");
	}
	}
	while(choice!=5);
return 0;
}
void insert()
{

 	if((front==0&&rear==(N-1))||(front==rear+1))
	{
	printf(" OVERFLOW ");
	}
	else
	{
		rear=(rear+1)%N;
 		printf("Insert the element in queue : ");        
                scanf("%d", &x);     
		cqueue[rear]=x;
		if(front==-1)
		front=0;
	}
		
}
void delete()
{
	 if(front == -1)
	printf("underflow");
		else if(front==rear)
		{
		printf("n the deleted  element is %d",cqueue[front]);
		front=rear=-1;
		}
	else
	{
	printf("the deleted element is %d",cqueue[front]);
	front=(front+1)%N;
	}
}
void display()
{
int i=front;
	if(front==-1&&rear==-1)
	{
	printf("cqueue is empty");
	}
	else
	{
	printf("contents of queue is:");
		while(i!=rear)
		{
		printf("%d",cqueue[i]);
		i=(i+1)%N;
		}
	printf("%d",cqueue[rear]);
	}
}
void search()
{
int f,i,search;
if(front==-1)
{
printf("queue is empty");
}
	else
	{
	printf("enter a number is to search=");
	scanf("%d",&search);
	f=0;
	for(i=0;i<N;i++)
	{
		if(cqueue[i]==search)
		{
		f=1;
		break;
		}
	}
	if(f==1)
	{
	printf(" %d is  present in the cqueue ",search,i+1);
	}
	else
	{
	printf("\n%d is not present in the queue",search);
	}
	}
}