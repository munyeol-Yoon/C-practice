#include <stdio.h>

void insert(int array[], int loc, int value, int items)
{
	int i;
	for(i = items; i>loc; i--) // loc 부터 i 까지  
	{
		array[i] = array[i-1]; // 한칸씩 뒤로  
	}
	array[loc] = value; // loc위치에 value  
}

int main(void)
{
	int array[10] = {1,2,3,4,5,6,7,8,9,10}; // 배열 초기값 선언  
	int i, items = 10;
	printf("Before\n");
	for(i = 0; i<items; i++)
	{
	     printf("%d ", array[i]); // 삽입전 결과  
	}
	printf("\n");
	
	insert(array, 3, 7, items); // 배열 array 의 3번째 위치에 7을 삽입  
	items++; // items 증가  
	printf("After\n");
	for(i = 0; i<items; i++)
	{
		printf("%d ", array[i]); // 삽입후 결과   
	}
	printf("\n");
	
	return 0;
}
