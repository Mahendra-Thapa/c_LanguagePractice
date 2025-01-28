#include<stdio.h>
// wap to find the number is even or odd

#include<stdbool.h>
/** 
brif check if the number" is even number
@parm number
@return true if number is even
@return true if number is odd
*/
bool isEven(int n)
{
	//check if the number is even
return((n%2) == 0);
}
int main()
{
	int n;
	printf("enter any number");
	scanf("%d",&n);
		if (isEven(n)) // call the is even function
		
		{
	printf("the number is even %d",n);
}
else
{

	printf("number is odd %d",n);
}
return 0;
}


