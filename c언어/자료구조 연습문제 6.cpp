#include<stdio.h>
#include<stdlib.h>

typedef struct {
    float real;
    float imaginary;
}Complex;

int main()
{
	Complex c1 = {35.1, 55.6};
	Complex c2 = {725.3, 242.9};
	
	printf("c1:%f, %f\n", c1.real, c1.imaginary);
	printf("c2:%f, %f\n", c2.real, c2.imaginary);
	
	return 0;
}
