#include<stdio.h>
void main(){
	int n,i=1,sum=0;
	printf("enter any number:");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(n%i==0){
			sum+=i;
		}
	
	}
	
	
		
			 if(sum==n){
			printf("given number is perfect:%d",n);
			
		}
		else
		{
			printf("given number is not perfect:%d",n);
		}

	
}
