#include<stdio.h>
/* Array;-it can store multyple value of same type and same variable
*/
int main()
{
	int n = 6;
float price[n];
int i;
for(i=0; i<n; i++)
{
	printf("enter the price for %d:-",i+1);
	scanf("%f",&price[i]);
	
	}	
	for(i=0; i<n; i++)
	{
		printf("price %d is %f \n",i+1,price[i]);
	}
	return 0;
}

