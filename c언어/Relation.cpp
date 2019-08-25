#include <stdio.h>

int main (void)
{
	int x=50, y =30;
	//x가 y와 같은 깂을 가지고 있는가?
	// x = y -> x의 y가 같은 상황 그 자체를  의마하죠
	// x ==y -> true x 와 y 가 같은 값을 가지고 있는 것입니다. 
	printf("x가 y와 같은가 ? %d\n", x == y);
	printf("x가 y와 다른가 ? %d\n", x != y); 
	printf("x가 y보다 큰가 ? %d\n", x >= y); 
    printf("x가 y보다 작은가 ? %d\n", x <= y);
	printf("x에 y값을 넣으면 ? %d\n", x = y);
	if(x == y)
	{
		//실행되는 부분
	}
	else
	{
		
	}
	return 0;
}
