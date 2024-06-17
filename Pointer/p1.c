#include<stdio.h>

void main()
{
	int a;
	char b;
	
	printf("Int Bytes : %lu \n",sizeof(a));	
	printf("Char Bytes : %d \n",sizeof(b));
	printf("Float Bytes : %d \n",sizeof(float));
	printf("Double Bytes : %d \n",sizeof(double));
	printf("Long Int Bytes : %d \n",sizeof(long int));
	printf("Long Long Int Bytes : %d \n",sizeof(long long int));
	
	int array[25];
	
	printf("\n Array Bytes : %lu\n",sizeof(array));
	
	int size = sizeof(array) / sizeof(array[0]);
	
	printf("Array Size : %d",size);
	
	char name[07] = "Vaibhav";
	
	printf("\n String Bytes : %lu\n",sizeof(name));
}
