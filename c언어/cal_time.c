#include <stdio.h>

int main(void)
{
	int a[5] = {10,20,30,40,50},sum=0,i;
	int *apple;
	
	apple = a;
	for(i=0;i<5;i++)
	sum = sum+*(apple+i);
	
	printf("*apple=%d,sum=%d\n",*apple,sum);
	return 0;
}
