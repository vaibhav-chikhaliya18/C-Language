#include<stdio.h>
main(){
	
	int a,b,c,d,e;
	
	printf("Enter Number Of A : ");
	scanf("%d",&a);
	printf("Enter Numbver Of B : \n");
	scanf("%d",&b);
	printf("Enter Numbver Of C : \n");
	scanf("%d",&c);
	printf("Enter Numbver Of D : \n");
	scanf("%d",&d);
	printf("Enter Numbver Of E : \n");
	scanf("%d",&e);	
	
	//max number
	(a > b)
		?((a > c)
			?((a > d)
				?(a > e))?printf("A Is Max")
					:printf("E Is Max"))
					
					:((d > e)printf("d Is Max")
					:printf("e Is Max")))
					
	:((c>d)
				?((c>e)?printf("c is max")
					   :printf("e is max"))
				:((d>e)?printf("d is max")
					   :printf("e is max"))))
		:((b>c)
			?((b>d)
				?((b>e)?printf("b is max")
					   : printf("e is max"))
				:((d>e)?printf("d is max")
				       : printf("e is max")))
			:((c>d)
				?((c>e)?printf("c is max")
				       :printf("e is max"))
				:((d>e)?printf("d is max")
				       :printf("e is max"))));
	//min number
	(a<b)
		?((a<c)
			?((a<d)
				?((a<e)?printf("\n a is min")
					   :printf("\n e is min"))
				:((d<e)?printf("\n d is min")
				       :printf("\n e is min")))
			
			:((c<d)
				?((c<e)?printf("\n c is min")
				       :printf("\n e is min"))
				:((d<e)?printf("\n d is min")
				       :printf("\n e is min"))))
		:((b<c)
			?((b<d)
				?((b<e)?printf("\n b is min")
				       : printf("\n e is min"))
				:((d<e)?printf("\n d is min")
				       : printf("\n e is min")))
			:((c<d)
				?((c<e)?printf("\n c is min")
				       :printf("\n e is min"))
				:((d<e)?printf("\n d is min")
				       :printf("\n e is min"))));					   		   
}
