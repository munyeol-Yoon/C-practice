#include <stdio.h>
#include <stdlib.h>

typedef int element;
typedef struct //  ���ñ���ü 
{
	element *data; 
	int capacity;
	int top;
} StackType;

void init_stack(StackType *s) // ���û����Լ�  
{
	s->top = -1;
	s->capacity = 1;
	s->data = (element*)malloc(s->capacity+sizeof(element));
}

void push(StackType *s, element item) // ������ �����͸� �߰��ϴ� push �Լ�  
{
	s->top++;
	s->data[s->top] = item;
}

element pop(StackType *s) // ������ �����͸� ����,��ȯ�ϴ� pop �Լ�  
{
	return s->data[(s->top)--];
}

void get_integers(int list[],int num) // �Ҵ��� �޸𸮿� ���� ä��� �Լ�  
{
	for(int i = 0; i <= num; ++i)
	{
		scanf("%d ", &list[i]);
	}
}

void swap(int *px, int *py) // ��ġ�� �ٲٴ� swap �Լ�  
{
	int temp;
	
	temp = *px;
	*px = *py;
	*py = temp;
	
}


int main(void)
{
	int num;
	
	printf("���ϴ� ���� �Է�(¦��) : ");
	scanf("%d", &num);
	
	int list[num]; // �Է¹��� ũ���� ����ü ���� 
	get_integers(list,num); // ���û���  
	
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
	init_stack(&s); // �����Լ�����  
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
