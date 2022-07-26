// WAP to do matrix transpose (2D matrix)
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int r,c,i,j;
	int**p;
	    printf("enter the r ,c values\n");
	scanf("%d%d",&r,&c);
	p=(int**)malloc(r*sizeof (int*));
	for(i=0;i<r;i++)
	p[i]=(int*)malloc(c*sizeof (int));
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			scanf("%d",&p[i][j]);
	}
	printf("before the printing the matrix\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			printf("%2d ",p[i][j]);
		printf("\n");


	}
	printf("after the transpose the matrix\n");

	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			printf("%2d ",p[j][i]);

		printf("\n");

	}

}
