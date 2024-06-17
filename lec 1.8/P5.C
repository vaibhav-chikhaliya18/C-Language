#include<stdio.h>
main(){
	
	int choice;
	printf("\t Chai Patner \n");
	printf("Enter Number Of Order : ");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			printf("Your Order Is Veg.Burger");
		break;
		
		case 2:
			printf("Your Order Is Pizza");
		break;
		
		case 3:
			printf("Your Order Is Veg.Maggie");
		break;
		
		case 4:
			printf("Your Order Is Veg.Sandwich");
		break;
		
		case 5:
			printf("Your Order Is Coffie");
		break;
		
		case 6:
			printf("Your Order Is Sprite Colddrink");
		break;
		
		default : 
			printf("Please Enter Vaild Num Of Order");						
	}
}
