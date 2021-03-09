#include<stdio.h>
#include<conio.h>
int trav[10],visited[10],n,node[10],mat[50][50];
int count=0;
void dfs(int);
void findpos(int);
void main()
 {
 int choice,i,j;
 clrscr();
 printf ("\n\t Enter the total number of nodes : ");
 scanf ("%d",&n);
 printf ("\n\t Enter %d node : ",n);
 for (i=0;i<n;i++)
  {
  scanf("%d",&node[i]);
  }
 printf ("\n\t Enter the adjacency matrix : \n");
 for (i=0;i<n;i++)
  {
  for (j=0;j<n;j++)
   {
   scanf("%d",&mat[i][j]);
   }
  }
 printf("\n\t Enter the node to start traversal : ");
 scanf("%d",&choice);
 findpos(choice);
 printf ("\n\t DFS : ");
 for (i=0;i<n;i++)
  {
  printf("%d\t",trav[i]);
  }
 getch();
 }
void dfs(int k)
 {
 int i,j;
 for (i=0;i<n;i++)
  {
  if (mat[k][i]==1&&visited[i]==0)
   {
   visited[i]=1;
   trav[count]=node[i];
   count++;
   dfs(i);
   }
  }
 }

void findpos(int choice)
 {
 int i,pos;
 for (i=0;i<n;i++)
  {
  if (node[i]==choice)
   {
   pos=i;
   break;
   }
  }
 trav[count]=node[pos];
 count++;
 visited[pos]=1;
 dfs(pos);
 }