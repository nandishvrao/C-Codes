/*Nandish V
Masters in Embedded Systems
Date:10-02-2016
program to print the following pattern
*
* *
* * *
* * * * */
#include<stdio.h>
void main()
{
	int i,j,n;
	printf("Enter how many rows are required:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)//for printing n number of rows
	{
		for(j=0;j<=i;j++)
		{
			printf("*\t");// for printing "*" in the pattern
		}
		printf("\n");
	}
}
