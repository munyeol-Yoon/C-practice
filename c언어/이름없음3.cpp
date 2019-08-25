#include <stdio.h>
#include <stdlib.h>

struct Example{
	int number;
	char name[10];
}
void main(){
	struct Example *p;
	
	p = (int *)malloc(2*sizeof(struct Example));
	*p->number=1;
	strcpy(p->name,"Park");
	*(p+1)->number=2;
	strcpy((p+1)->name,"Kim");
	free(p);
}
