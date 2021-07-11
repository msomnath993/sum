 #include<stdio.h>
int main()
{
	int LA[5]={89,9,23,56,32};
	int i=0,n=5;
	int sum=0;
 	printf("the original array element are:\n");
	for(i=0;i<n;i++)
	{
		printf("LA[%d]=%d\n",i,LA[i]);
	}
	for(i=0;i<n;i++)
	sum=sum+LA[i];
 
	printf("the sum of array element is %d",sum);
	return 0;
}

