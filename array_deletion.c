#include<stdio.h>
int main()
{
int a[100],n,p,i;
printf("enter the size of an element=");
scanf("%d",&n);

printf("enter the elements= ");
	
	for(i=0; i<n; i++)
	scanf("%d",&a[i]);
printf("position of an deleting element=");
scanf("%d",&p);

if(p>=n+1||p<1 )
printf("no deletion");
	else
	 {
	 for(i=p-1; i<n-1; i++	)
	  
	   a[i]=a[i+1];
          
 printf("array deletion");

 for(i=0; i<n-1; i++)
  printf("%d",a[i]);
}
return 0;
}