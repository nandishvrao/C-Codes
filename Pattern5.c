/*Nandish V
Masters in Embedded Systems
Date:11-02-2016
program to print the following pattern
* * * *
* * *
* *
* */
#include<stdio.h>
void main()
{
	int i,j,n;
	printf("enter the value of n to print so many rows:\n");
	scanf("%d,",&n);
	for(i=0;i<n;i++)
	{
		for(j=n;j>0;j--)//for(j=n;j>i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}
