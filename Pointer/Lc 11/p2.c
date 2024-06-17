#include<stdio.h>

void swap(int *,int *);
void main()
{
    int x,y;
    printf("Enter The Value Of X : ");
    scanf("%d",&x);
    printf("Enter The Value Of Y : ");
    scanf("%d",&y);	

    printf("Before swapping: X = %d, Y = %d ",x,y);
    swap(&x,&y);

    printf("\nAfter swapping: X = %d, Y = %d \n\n",x,y);
    return 0;
}

void swap(int *x,int *y)
{
    int tmp;
    tmp = *x; 
    *x=*y;
    *y=tmp;
}
