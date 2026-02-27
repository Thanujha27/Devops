#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int n,i,j,*a,t;
void main()
{
	double st,et,ts;
	printf("Enter the size of array:");
	scanf("%d",&n);
	a=(int *)malloc(n *sizeof(int));
	for(i=0;i<n;i++)
		a[i]=rand()%n;
	printf("\nRandom numbers:");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
	st=clock();
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	et=clock();
	ts=(double)(et-st)/CLOCKS_PER_SEC;
	printf("\nafter sort elements are:");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
	printf("\ntime spent for %d elements%lf",n,ts);
}


