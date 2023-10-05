#include<stdio.h>
void main(){
	long int n,count=0;
	scanf("%ld",&n);
	while(n!=0)
	{
		n=n/10;
		count=count+1;
		
	}
	printf("%ld",count);
	
}
