#include<stdio.h>

//aditon in pointer of c program
int main()
{
int fn,sn,*m,*t,sum,sub,mult,div;
printf("enter the first number:-");
scanf("%d",&fn);
printf("enter the second number:-");
scanf("%d",&sn);

m=&fn;
t=&sn;

sum = *m+*t;
sub = *m-*t;
mult= *m * *t;
div=*m / *t;

printf("the sum of two number is %d\n",sum);	
	printf("the sub of two number is %d\n",sub);
	printf("the mult of two number is %d\n",mult);
	printf("the div of two number is %d\n",div);
	return 0;
}
