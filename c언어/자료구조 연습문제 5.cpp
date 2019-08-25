#include<stdio.h>
#include<stdlib.h>

typedef struct Person{
	char name[20];
	int age;
	float sal;
}Personal;

int main()
{
	Personal a = {"홍길동", 30, 4.5};
	Personal b = {"윤문열", 25, 44.6};
	
	printf("이름:%s 나이:%d 급여:%f\n", a.name, a.age, a.sal); 
	printf("이름:%s 나이:%d 급여:%f\n", b.name, b.age, b.sal);  
	
	return 0;
}
	
