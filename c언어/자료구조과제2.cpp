#include <stdio.h>
#include <stdlib.h>

typedef int items;


void insert_array(int array[],int loc, int value){
	int i;
	printf("정수 입력:\n"); 
	for(i = items-1; i>=loc; i--){
		array[i+1] = array[i];
		scanf("%d", &array[i];
	}
	array[loc] = value;
	tiems++;
}

int main(void)
{
	int list[loc];
	insert_array(array);
	printf("%d", insert(array));
	return 0;
}
 

