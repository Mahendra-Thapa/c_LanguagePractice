#include<stdio.h>
int main()
{
struct Student
{
	char n[13];
	int R;
	float p;
}s;
	printf("enter the name of student:-");
	scanf("%c",s.n);
	printf("enter the roll no. of student:-");
	scanf("%d",&s.R);
	printf("enter the percentage of student:-");
	scanf("%f",&s.p);
	printf("Name of student is %c\n",s.n);
	printf("Roll no of the student is %d\n",s.R);
	printf("percentage of the student is %f \n",s.p);
	return 0;
	
}
