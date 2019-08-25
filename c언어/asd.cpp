#include <stdio.h>

void insert(int array[], int loc, int value, int items)
{
	int i;
	for(i = items; i>loc; i--) // loc ���� i ����  
	{
		array[i] = array[i-1]; // ��ĭ�� �ڷ�  
	}
	array[loc] = value; // loc��ġ�� value  
}

int main(void)
{
	int array[10] = {1,2,3,4,5,6,7,8,9,10}; // �迭 �ʱⰪ ����  
	int i, items = 10;
	printf("Before\n");
	for(i = 0; i<items; i++)
	{
	     printf("%d ", array[i]); // ������ ���  
	}
	printf("\n");
	
	insert(array, 3, 7, items); // �迭 array �� 3��° ��ġ�� 7�� ����  
	items++; // items ����  
	printf("After\n");
	for(i = 0; i<items; i++)
	{
		printf("%d ", array[i]); // ������ ���   
	}
	printf("\n");
	
	return 0;
}
