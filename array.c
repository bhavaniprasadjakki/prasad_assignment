//wap to find the smallest and largest element in the array
#include<stdio.h>
int main()
{
	int arr[5],i,n,j,small,big;
	n=sizeof arr/sizeof arr[0];
	printf("enter the array elements\n");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	small=arr[0],big=arr[0];
	printf("before print the array elements\n");
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);

	for(i=1;i<n;i++)
	{

		if(arr[i]>small)
		{

			if(arr[i]>big)	
				big=arr[i];
		}
		else
			small=arr[i];



	}
	printf("\nsmall=%d,big=%d\n",small,big);

}
