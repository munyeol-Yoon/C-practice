#include <stdio.h>
#include <stdlib.h>

typedef int element;
typedef struct ListNode{    // 노드 타입
    element data;
    struct ListNode *link;
}ListNode;

// 오류 처리 함수
void error(char *message)
{
    fprintf(stderr, "%s", message);
    exit(1);
}
ListNode* insert_first(ListNode *head, int value)
{
	ListNode* p = (ListNode *)malloc(sizeof(ListNode));
	p->data=value;
	p->link=head; // 헤드포인터 값 복사 
	head=p;   // 헤드포인터 변경
	return head;
}
// 노드 pre 뒤에 새로은 노드 삽입
ListNode* insert(ListNode *head, ListNode *pre, element value)
{
	ListNode *p = (ListNode *)malloc(sizeof(ListNode));
	p->data=value;
	p->link=pre->link;
	pre->link=p;
	return head;
}

void print_list(ListNode *head)
{
	for(ListNode *p = head; p !=NULL; p=p->link)
	printf("%d->",p->data);
	printf("NULL\n");
}

int main(void)
{
	ListNode *head = NULL;
	
	for(int i = 0;i<5;i++)
	{
		head = insert_first(head,i); // insert_first()가 반환된 헤드포인터를 head 에 대입한다
		print_list(head);
	}
		
	return 0;
}
		 
