#include<stdio.h>
int main()
{
	/*
	if condition :- it tells the computer to perform a certain task only.
	
	syntax : if (condition)
	         statement
	         */
	
	// wap to show are you elagible for votting or not 
	
int age;
printf("enter the age of votter \n",age);
scanf("%d",&age);
if(age > 20)
{
	printf("elegible for voting");
	
}
	else
	printf("not elagible for voting");
	
	
	return 0;
}
