#include <stdio.h>
#include <stdlib.h>

typedef int element;
typedef struct ListNode{
	element data;
	struct ListNode *link;
}ListNode;
 

void print_list(ListNode* head)
{
	ListNode* p;
	
	if(head == NULL) return;
	p = head->link;
	do{
		printf("%d->",p->data);
		p = p->link;
	}
	while (p != head);
	printf("%d->",p->data);
}

ListNode* insert_first(ListNode* head, element data)
{
	ListNode *node = (ListNode *)malloc(sizeof(ListNode));
	node->data = data;
	if(head == NULL){
		head = node;
		node->link = head;
	}
	else {
		node->link = head->link;
		head->link = node;
	}
	return head;
}

ListNode* insert_last(ListNode* head, element data)
{
	ListNode *node = (ListNode *)malloc(sizeof(ListNode));
	node->data = data;
	if(head == NULL) {
		head = node;
		node->link = head;
	}
	else {
		node->link = head->link;
		head->link = node;
		head = node;
	}
	return head;
}

ListNode* search(ListNode *head, element data)
{
	ListNode *p = head;  
	ListNode *a = head;
	
	while(p != NULL){ // p�� ���� NULL�� �ƴҰ��
	  
		if(p->data == data) // p�� ����Ű�� data���� x�� �������  
		return p; // p�� ���� ����  
		p=p->link; // p �� p�� ����Ű�� link��  
		if(p->link == a) // p�� ����Ű�� a���� �������  
		break; // �ݺ����� �������� o	
	}
	return NULL;
}

int main(void)
{
	ListNode *head = NULL;
	int s = 40;
	
	head = insert_last(head, 20);
	head = insert_last(head, 30);
	head = insert_last(head, 40); 
	head = insert_first(head, 10);
	head = insert_first(head, 150);
	print_list(head);
	printf("\n");
	if(search(head,s) != NULL)
	printf("����Ʈ���� %d�� ã�ҽ��ϴ�.\n", s);
	else
	printf("����Ʈ���� %d�� ã�� ���߽��ϴ�,\n", s);
	 
	
	return 0;
}
