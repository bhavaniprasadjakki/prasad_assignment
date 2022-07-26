#include<stdio.h>
int main()
{
	int x=300;
	char *p= (char*)&x;
	if(*p==44)

		printf("littele indian\n");
	else
		printf("big indian\n");





}
