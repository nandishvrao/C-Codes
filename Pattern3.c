/*Nandish V
Masters in Embedded Systems
Date:10-2-2016
program to print following pattern
* * * *
* * * *
* * * *
* * * * */
#include<stdio.h>
void main()
{
	int i,j,n;
	printf("enter number of rows required:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}
