#include<stdio.h>
main(){
	
	int choice;
	
	printf("Enter Number Of Week : ");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			printf("1 Week");
		break;
		
		case 2:
			printf("2 Week");
		break;
		
		case 3:
			printf("3 Week");
		break;
		
		case 4:
			printf("4 Week");
		break;
		
		case 5:
			printf("5 Week");
		break;
		
		case 6:
			printf("6 Week");
		break;
		
		default : 
			printf("Please Enter Vaild Num Of Week");						
	}
}
