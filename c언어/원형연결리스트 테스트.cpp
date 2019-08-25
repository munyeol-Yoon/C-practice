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
	
	while(p != NULL){ // p의 값이 NULL이 아닐경우
	  
		if(p->data == data) // p가 가리키는 data값이 x와 같을경우  
		return p; // p의 값을 리턴  
		p=p->link; // p 는 p가 가리키는 link값  
		if(p->link == a) // p가 가리키는 a값과 같을경우  
		break; // 반복문을 빠져나감 o	
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
	printf("리스트에서 %d을 찾았습니다.\n", s);
	else
	printf("리스트에서 %d을 찾지 못했습니다,\n", s);
	 
	
	return 0;
}
