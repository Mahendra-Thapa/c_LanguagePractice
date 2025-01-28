#include<stdio.h>
/* Aray;-it can store multyple value of same type and same variable
*/
int main()
{
	int n;
	printf("enter the number:- ");
	scanf("%d",&n);
	
	int num[n];
	
	int i,j;
	for (i= 0; i<n; i++)
	{
		printf("enter the price of %d:-",i+1);
		scanf("%d",&num[i]);
		
	}
	int temp;
	for (i=0; i<n; i++){
		for (j=0; j<n; j++){
			if (num[i]<num[j])
			{
				temp=num[i];
				num[i]=num[j];
				num[j]=temp;
			}
		}
	}
		for (i= 0; i<n; i++)
		{
			printf("price of %d is %d \n",i+1,num[i]);
		}
	return 0;
}

