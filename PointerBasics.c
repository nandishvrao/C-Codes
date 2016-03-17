/*Nandish V
Masters in Embedded Systems
Program to understand the working of pointers
*/

#include<stdio.h>
int main()
{
	int a;//normal variable declaration
	//integer is the type of the pointer variable
	int *ptr;// when we * in front of a variable then we call it as pointer variable
	/*once we declare a pointer variable, then we need to assign the address of the variable
	 from which the pointer variable has to be dereferenced*/
	ptr=&a;
	a=10;
	printf("the value stored in the ptr location is %d\n",*ptr); 
	printf("the address of variable a is %d\n",ptr);
	printf("the value of a is %d\n",a);
	*ptr=12;
	printf("the value of a after dereferencing is %d\n",a);
	printf("the address of a variable is %d\n",&a);
	return 0;
}
