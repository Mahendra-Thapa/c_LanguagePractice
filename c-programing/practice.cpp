#include<stdio.h>
int add(int a, int b);
int sub(int a, int b);
int main()
{
	int fn,sn;
	pirntf("enter the fn is");
	scanf("%d",&fn);
	printf("enter the sn is");
	scanf("%d",&sn);
	printf("the sum is %d\n"add(fn,sn));
	printf("the sub is %d\n"sub(fn,sn));
	
	
	return 0;
}
int add(int a, int b){
int add = a+b;
return add;
}
int sub(int a, int b){
	int sub = a-b;
	return sub;
}
