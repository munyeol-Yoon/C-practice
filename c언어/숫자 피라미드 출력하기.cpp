#include <stdio.h>

//반복함수를 이용해서 숫자 피라미드를 출력합니다.
//반복함수는 오직 for문과 while문으로 구성이 됩니다. 

int print(int a)
{
	int i,j;
	for(i=0;i<a;i++)
	{
	    for(j=0;j<=i;j++)
		{
		printf("%d ",j+1);
	    }
	printf("\n");
	}
}
int main(void)
{
	
	int a;
	scanf("%d",&a);
	print(a);
	return 0;
}
