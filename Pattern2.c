/*Nandish V
Masters in Embedded Systems
Date:10-2-2016
program to print the following pattern
1
1 1
1 1 1
1 1 1 1 */
#include<stdio.h>
void main()
{
	int i,j,n;
	printf("enter the number of rows to be printed:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("1 ");
		}
		printf("\n");
	}
}
