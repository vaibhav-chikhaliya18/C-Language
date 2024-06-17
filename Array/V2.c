#include<stdio.h>
main(){
	int a;
	
	printf("Enter Of Value Number : ");
	scanf("%d",&a);
	
	int arr[a] , i , sum = 0;
	
	for(i=0;i<a;i++){
		printf("arr[%d] = ",i);
		scanf("%d",arr[i]);
	}
	
	for(i=0;i<a;i++){
		if(arr[i] % 2 == 0){
		printf("\n %d",arr[i]);	
		}
	}
}
