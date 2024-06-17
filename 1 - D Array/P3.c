#include<stdio.h>
main(){
	int i, arr[i] , a;
	
	printf("Enter the size of array:-");
	scanf("%d",&a);
	
	for(i=0;i<a;i++){
		printf("arr[%d]:",i);
		scanf("%d",&arr[i]);
	}
	
	printf("THE SQUARE OF ARRAY:");
	for(i=0;i<a;i++){
		printf("\n %d",arr[i]*arr[i]);
	}
}
