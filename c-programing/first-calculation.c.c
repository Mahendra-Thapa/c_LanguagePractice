#include<stdio.h>
int main()
{
// our first calculation in c
// declering variable
int firstnum,secondnum, add,sub,mul,div,mod;
// geting input
printf("enter the first number:\n");
scanf("%d",&firstnum);

printf("enter the second number:\n");
scanf("%d",&secondnum);

//calculating
add=firstnum+secondnum;
sub=firstnum-secondnum;
mul=firstnum*secondnum;
div=firstnum/secondnum;
mod=firstnum%secondnum;
// printing 
printf("addtion of two number is %d\n",add);
printf("sutrition of two number is %d\n ",sub);
printf("multipction of two num is %d\n",mul);
printf("division is %d\n",div);
printf("mod is %d",mod);
return 0;


	
	
	
}


