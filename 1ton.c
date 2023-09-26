#include<stdio.h>

void main()
{
	int num;
	int n;
	num=1;
	printf("Enter the value of n:");
	scanf("%d",&n);
	
	printf("odd number from 1 to %d:\n",n);
	 while(num<=n)
	 {
	 	if(num%2 !=0)
	 	printf("%d",num);
	 	num++;
	 }
}
