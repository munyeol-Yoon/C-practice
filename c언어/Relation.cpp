#include <stdio.h>

int main (void)
{
	int x=50, y =30;
	//x�� y�� ���� ���� ������ �ִ°�?
	// x = y -> x�� y�� ���� ��Ȳ �� ��ü��  �Ǹ�����
	// x ==y -> true x �� y �� ���� ���� ������ �ִ� ���Դϴ�. 
	printf("x�� y�� ������ ? %d\n", x == y);
	printf("x�� y�� �ٸ��� ? %d\n", x != y); 
	printf("x�� y���� ū�� ? %d\n", x >= y); 
    printf("x�� y���� ������ ? %d\n", x <= y);
	printf("x�� y���� ������ ? %d\n", x = y);
	if(x == y)
	{
		//����Ǵ� �κ�
	}
	else
	{
		
	}
	return 0;
}
