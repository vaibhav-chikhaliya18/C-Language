#include<stdio.h>

void main()
{
	int a = 05;
	int *ptr;
	
	ptr = &a;
	
	printf("A\t : %d\n",a);
	printf("PTR\t : %d\n\n",*ptr);
	
	printf("A\t : %d\n",a);
	printf("Address Of A\t : %p\n",&a);
	printf("PTR Store Address\t : %p",&a);
}
