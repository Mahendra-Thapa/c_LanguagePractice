#include<stdio.h>
double square(double num)
{
	return num*num;
}
int main()
{
double num,results;

printf("enter any number ");
scanf("%lf",&num);

results = square(num);
printf("square of number %lf=%lf \n",num,results);
return 0;	
}
