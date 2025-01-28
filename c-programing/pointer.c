#include<stdio.h>
int main()
//pinter:- it is a variable that contain address of other variable.
{
	int a = 20;// normail veriable
	int *p = &a;// pointer variable
	int m= 10;
	int *n=&m;
	
	
	printf("the value of a is %d\n",a);
	printf("the value of p is %d\n",p);
	printf("the value of m is %d\n",m);
	printf("the value of n is %d",n);
	
	return 0;
}
