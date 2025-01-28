#include<Stdio.h>
int main()
{
	int a= 20;
	int b = 30;
	printf("the value of a is %d and  the value of b is %d\n",a,b);
	swap(&a,&b);
	printf(" the value of a is %d and the value of b  is %d",a,b);
	
	return 0 ;
}
	void swap(int *a, int *b)
	{
		int temp;
		temp =  *a;
		 *a =  *b;
		 *b = temp;
	
	}
	
	

