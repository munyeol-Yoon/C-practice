#include <stdio.h>

int nCr(int n, int r)
{
	if(r==0 || r==n)
	{
		return 1;
	}
	else
	{
		return nCr(n-1,r-1) + nCr(n-1,r);
	}
}

int main(void)
{
	int n,r;
	printf("숫자 입력ex(10 5):"); 
	scanf("%d %d", &n, &r);
	printf("%d 입니다.", nCr(n,r));
	return 0;
}
