#include<stdio.h>
#include<stdlib.h>


void insert();
void delete();
void display();
int quar[100];
int rear=-1;
int front=-1;
void main()
{
  int choice;
   

  printf(" 1.inserting element to the queue\n");
  printf(" 2.deleting element to the queue\n");
  printf(" 3.display element to the queue\n");
  printf(" 4.exit\n");
while(1)
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
	   case 4:exit(1);
	   default:
	   printf("wrong choice");
	}
}
}

	void insert()
	{
	  int additem;
          if (rear == quar[100] - 1)   
	  printf("Queue Overflow \n");   
		 else
		    { 
		       if (front == - 1)       
		       front = 0;  
		      printf("Insert the element in queue : ");        
                      scanf("%d", &additem);        
		       rear = rear + 1;
              			quar[rear] = additem;
		    }
	}	

	void delete() 
	{
	    if (front == - 1 || front > rear)   
	       {       
		 printf("Queue Underflow \n");  
	         return ;    
	       }    
		else   
		 {
        printf("Element deleted from queue is : %d\n", quar[front]);     
	   front = front + 1 ;
		 }
	 }

	void display()
	 {  
	  int i; 
 	   if (front == - 1)     
	   printf("Queue is empty \n");    
		else
 		   { 
		       printf("Queue is : \n"); 
		       for (i = front; i <= rear; i++)         
		       printf("%d ", quar[i]);      
		       printf("\n");    
		  }
	}