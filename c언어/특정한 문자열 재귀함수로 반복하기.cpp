#include <stdio.h>
//����Լ�  
void print(int count)
{
	if(count ==0)
	{
		return;
	}
	else
	{
		printf("���ڿ��� ����մϴ�\n");
		print(count-1);
	}
}



int main(void)
{
	int number;
	printf("���ڿ��� � �Է��ұ��?"); 
	scanf("%d",&number);
	print(number); 
	return 0;
}
