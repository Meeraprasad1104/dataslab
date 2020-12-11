#include<stdio.h>
int main()
{
int a[100],n,p,v,i;
printf("enter the size of an element=");
scanf("%d",&n);
printf("enter the elements=");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
printf("position of an inserting element=");
scanf("%d",&p);
printf("value of  an inserting element=");
scanf("%d",&v);
	for(i=i-1; i>=p-1; i--)
	a[i+1] = a[i];
	a[p-1] = v;
 printf("new result=");
 for(i=0;i<=n;i++)
 printf("%d",a[i]);
return 0;
}
