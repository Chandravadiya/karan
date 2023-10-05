#include<stdio.h>
void main(){
	int n,rem,rn,n1;
	printf("enter any number:");
	scanf("%d",&n);
	n1=n;
	while(n!=0)
	{
		rem=n%10;
        rn=rn*10+rem;
		n=n/10;
	}
	if(rn==n1)
	{
		printf("this is palidrom number");
	}
	else
	{
		printf("this is not palidrom number");
	}
	

	
}
