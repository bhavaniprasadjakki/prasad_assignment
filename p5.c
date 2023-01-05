#include<stdio.h>
int main()
{
	int n,i,j,k,m;
	printf("enter the n value\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<(n-i)-1;j++)
				
				printf(" ");
		for(k=0,m=1;k<=i;k++)
				printf("%d ",m);
		
		printf("\n");



	}
}
