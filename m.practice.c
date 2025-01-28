#include<stdio.h>
int sum (int a, int b);
int sub (int a, int b);
int mult (int a, int b);
int div (int a, int b);
int main()
{
	int x,y,add, sub,div,mult;
	printf("enter the first number");
	scanf("%d",&x);
	printf("enter the second number");
	scanf("%d",&y);
	printf("the sum of two number is %d \n",(x,y));
	printf("the sub of two number is %d \n",(x,y));
	printf("the mult of two number is %d \n",(x,y));
	printf("the div of two number is %d \n",(x,y));
	
	
}
int add (int a, int b)
{
	int add = a+b;
	return add;
}
int sub(int a, int b)
{
	int sub = a+b;
	return sub;
}
int mult(int a ,int b)
{
	int mult =a+b;
	return mult;
	
}
int div(int a, int b)
{
	int div = a + b;
	return div;
}

