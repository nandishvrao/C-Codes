/* program to swap two numbers using function
Nandish V
Masters in Embedded Systems
method used here is calling by reference */

#include<stdio.h>
int swap(int *,int * );
int main()
{
	int a, b;
	printf("enter the values of a & b\n");
	scanf("%d%d",&a,&b);
	printf("the values before swapping is a=%d and b=%d\n",a,b);
	swap(&a,&b);
	printf("the values after swapping is a= %d and b=%d\n",a,b);	
	return 0;
}
int swap(int *x, int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
	return 0;
}
