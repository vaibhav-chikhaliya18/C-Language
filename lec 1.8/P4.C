#include<stdio.h>
main(){
	
	int choice;
	
	printf("Enter Number Of Day : ");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			printf("Monady");
		break;
		
		case 2:
			printf("Tuesday");
		break;
		
		case 3:
			printf("Wensday");
		break;
		
		case 4:
			printf("Thursday");
		break;
		
		case 5:
			printf("Friday");
		break;
		
		case 6:
			printf("Saturday");
		break;
		
		default : 
			printf("Please Enter Vaild Num Of Days");						
	}
}
