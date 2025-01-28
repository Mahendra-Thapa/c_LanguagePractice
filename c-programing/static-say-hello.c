#include<stdio.h>
void sayHello();
int main()
{
	int i;
	for ( i=0; i<=12; i++){
	
	sayHello();
}
return 0;
}
void sayHello()
{
	static int num = 1;
	printf("hello from number %d \n",num);
	num++;
	
	
}
