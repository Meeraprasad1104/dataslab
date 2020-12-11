#include<stdio.h>
#include<stdlib.h>
int stacka[100];
int top,n,i,choice,x;
void push();
void pop();
void display();
int main()
{
 top = -1;
 printf("enter the size of the stack=");
 scanf("%d",&n);
 printf("\nstack operations \n1.push \n2.pop \n3.display \n4.exit");
do
{
 printf("\nenter the choice=");
 scanf("%d",&choice);
 switch(choice)
 {
	case 1:push();
		break;
	case 2:pop();
		break;
	case 3:display();
		break;
	case 4:printf("exit");
		break;
	default:
		printf("wrong input");
	
 }
}
while(choice!=4);
return 0;

}

	void push() 
	   {
	    if(top>=n-1)  
		 printf("\n\tSTACK is over flow");        
     	   else
	   {  
      	 printf(" Enter a value to be pushed:");   
	     scanf("%d",&x);        
		top++;
	        stacka[top]=x;
	   }
	    
	}
	
  void pop()
	 {
           if(top<=-1)    
              printf("\n\t Stack is under flow");    
	    else  
		  
       printf("\n\t The popped elements is %d ",stacka[top]);        
	top--;
		    
	}
  void display() 
	{
	    if(top>=0) 
		{
                printf("\n The elements in STACK \n");    
		    for(i=top; i>=0; i--)     
	       printf("\n%d",stacka[i]);
		
		}
	     else
		{
		printf("stack empty");
		}
		
	}
