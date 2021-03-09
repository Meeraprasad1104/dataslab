#include<stdio.h>
#include<conio.h>
int queue[10],visited[10],mat[10][10],node[10],n;
int rear=-1,front=-1;
void bfs(int);
void findpos(int);
void main()
 {
 int i,j,choice;
 
 printf("\n\t Enter the total no:of nodes : ");
 scanf("%d",&n);
 printf("\n\t Enter %d nodes : ",n);
 for(i=0;i<n;i++)
  {
  scanf("%d",&node[i]);
  }
 printf("\n\t Enter the adjacency matrix : \n");
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
 getch();
 }

void findpos(int choice)
 {
 int i,j,pos;
 for(i=0;i<n;i++)
  {
  if (choice==node[i])
   {
   pos=i;
   break;
   }
  }
  rear=0;
  front=0;
  queue[rear]=pos;
  visited[i]=1;
  printf ("\n\t BFS : %d",node[pos]);
  bfs(pos);
 }

void bfs(int k)
 {
 int i;
 for(i=0;i<n;i++)
  {
  if (mat[k][i]==1&&visited[i]==0)
   {
   rear=rear+1;
   queue[rear]=i;
   visited[i]=1;
   printf("\t %d",node[i]);
   }
  }
 front++;
 if (front<=rear)
  {
  bfs(queue[front]);
  }
 }