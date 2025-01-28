#include <stdio.h>
int sub( int a, int b);
int add( int a, int b);
int main()
{
	int fn,sn;
	
	printf("enter fn number:");
	scanf("%d",&fn);
	printf("enter sn number:");
	scanf("%d",&sn);
	printf("the sum is %d\n",add(fn,sn));
	printf("the sub is %d\n",sub(fn,sn));
	printf("the square of 5 is %d",getsquare(5));
	return 0;
	
}
int add( int a, int b){
	int add = a+b;
	return add;
}

int sub( int a, int b)
{
int sub = a-b;
return sub;
}
int getsquare( int num){

return num*num;

}
