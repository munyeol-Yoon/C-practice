#include <stdio.h>
#include <stdlib.h>

typedef int element;
typedef struct ListNode{    // ��� Ÿ��
    element data;
    struct ListNode *link;
}ListNode;

// ���� ó�� �Լ�
void error(char *message)
{
    fprintf(stderr, "%s", message);
    exit(1);
}
ListNode* insert_first(ListNode *head, int value)
{
	ListNode* p = (ListNode *)malloc(sizeof(ListNode));
	p->data=value;
	p->link=head; // ��������� �� ���� 
	head=p;   // ��������� ����
	return head;
}
// ��� pre �ڿ� ������ ��� ����
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
		head = insert_first(head,i); // insert_first()�� ��ȯ�� ��������͸� head �� �����Ѵ�
		print_list(head);
	}
		
	return 0;
}
		 
