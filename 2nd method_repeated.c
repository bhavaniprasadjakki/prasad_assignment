//repeated array elements count
#include<stdio.h>
int main()
{
	int a[5],i,j,c=0,f;
	puts("enter the elements\n");
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);
	for(i=0;i<5;i++)
	{
		for(j=0;j<i;j++)
		{	
			if(a[j]==a[i])
				
				break;
		}

		if(i==j)
		{	
			for(j=i+1,c=1;j<5;j++)
			{
				if(a[i]==a[j])
					c++;

			}
			if(c>1)

				printf("%d------->%d\n",a[i],c);
		}
	}
}
