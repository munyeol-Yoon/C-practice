#include<stdio.h>
#include<stdlib.h>

typedef struct Person{
	char name[20];
	int age;
	float sal;
}Personal;

int main()
{
	Personal a = {"ȫ�浿", 30, 4.5};
	Personal b = {"������", 25, 44.6};
	
	printf("�̸�:%s ����:%d �޿�:%f\n", a.name, a.age, a.sal); 
	printf("�̸�:%s ����:%d �޿�:%f\n", b.name, b.age, b.sal);  
	
	return 0;
}
	
