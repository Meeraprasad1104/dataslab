
#include<stdio.h>
int main()
{
int a[100],b[100];
int m,n,i,j,temp,size=0,tot;
printf("*******first array*******\n");
printf("enter the size of the first array=");
scanf("%d" ,&m);
printf("\nenter the elements of the array=");
	for(i=0;i<m;i++)
	{

	scanf("%d",&a[i]);
	}

printf("*******second array*******\n");
printf("enter the size of the second array=");
scanf("%d" ,&n);
printf("\nenter the elements of the array=");
	for(i=0;i<n;i++)
	{

	scanf("%d",&b[i]);
	
	
	}
	tot=m+n;
	for(i=m;i<tot;i++)
	{
	a[i]=b[size];
	size++;
	}
	//sorting
	for(i=0;i<tot-1;i++)
	{
		for(j=0;j<tot-1;j++)
		{
			if(a[j]>a[j+1])
			{
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
			}
		}
	}
		
		printf("array elements after sorting=\n");
		for(i=0;i<tot;i++)
		{
			printf("%d ", a[i]);
		}
		return 0;
}