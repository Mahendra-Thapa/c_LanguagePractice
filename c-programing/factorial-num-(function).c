#include<stdio.h>
// factoral of number

//recursion function = call to same function
// 0! =1
// 1! =1* 0! =1
// 2! = 2 * 1 
// 5! = 5*4*3*2*1
int factorial(int num);
int main()
{
	int nums = 4;
	printf(" factorial of given number is %d",factorial(nums));
	return 0;
}
int factorial(int num){
if (num == 1){
	return 1;
}
	return (num * factorial(num -1));
}
