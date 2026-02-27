#include<stdio.h>
#include<stdlib.h>
void bfsearch();
int cost[20][20],explored[40],visited[20],que[40],f=-1,r=-1;
int m,n,i,j;
void main()
{
	printf("enter the number of vertices:");
	scanf("%d",&m);
	printf("enter the number of edges:");
	scanf("%d",&n);
	for(i=1;i<m;i++)
	{
		visited[i]=0;
		explored[i]=0;
	}
	for(i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cost[i][j]=cost[i][j]=1;
		}
	}
	printf("enter edges:");
	for( i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%d",&cost[i][j];
		}
	}
                for(int j=1;j<=n;j++)
                {       
                        cost[i][j]=cost[i][j]=1;
                }
        }       
                for(int j=1;j<=n;j++)
                {       
                        cost[i][j]=cost[i][j]=1;
                }
        }       

