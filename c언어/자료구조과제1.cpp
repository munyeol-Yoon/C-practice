#include <stdio.h>
#include <stdlib.h>

typedef int element;
typedef struct //  스택구조체 
{
	element *data; 
	int capacity;
	int top;
} StackType;

void init_stack(StackType *s) // 스택생성함수  
{
	s->top = -1;
	s->capacity = 1;
	s->data = (element*)malloc(s->capacity+sizeof(element));
}

void push(StackType *s, element item) // 스텍의 데이터를 추가하는 push 함수  
{
	s->top++;
	s->data[s->top] = item;
}

element pop(StackType *s) // 스텍의 데이터를 삭제,반환하는 pop 함수  
{
	return s->data[(s->top)--];
}

void get_integers(int list[],int num) // 할당한 메모리에 값을 채우는 함수  
{
	for(int i = 0; i <= num; ++i)
	{
		scanf("%d ", &list[i]);
	}
}

void swap(int *px, int *py) // 위치를 바꾸는 swap 함수  
{
	int temp;
	
	temp = *px;
	*px = *py;
	*py = temp;
	
}


int main(void)
{
	int num;
	
	printf("원하는 숫자 입력(짝수) : ");
	scanf("%d", &num);
	
	int list[num]; // 입력받은 크기의 구조체 생성 
	get_integers(list,num); // 스택생성  
	
	int a,b;  
	for(int i = 1; i < num; i = i+2) // swap  
	{
      swap(list+(i-1), list+i);
    }
	for(int i = 0;i < num; i++)
	{
      printf("%d ", list[i]); 
    }
	
	StackType s; 
	init_stack(&s); // 스택함수선언  
	for(int i = 0; i<num; i++)  
	{
	push(&s,list[i]);
    }
    printf("\n");
    for(int i = 0; i<num; i++)
    {
    printf("%d ", pop(&s));
    }
    
	free(s.data);
	return 0;
}
