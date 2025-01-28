#include<stdio.h>
// wap in c taht accept n number of array and sort  them in ascendimg.
int main()
{
	int n, i,j; // i for loop
	printf("enter the number :-");
	scanf("%d",&n);
	
	int num[n];// define array
	

	//putting value
	
	for (i=0; i<n; i++)
	{
		printf("the value of %d  ",i+1);
		scanf("%d",&num[i]);
	}
		int temp;// store value in variable
	for(i=0; i<n; i++){
		for(j=0; j<n; j++)
		{
			if (num[i] < num[j]){
			
			temp= num[i];
			num[i]=num[j];
			num[j]=temp;
		}
		}
	}
	
//printing value
	for (i=0; i<n; i++)
	{
		printf("\n %d  \n",num[i]);
	}
	
	
	return 0;
}
