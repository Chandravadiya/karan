#include<stdio.h>
int factorial(int n);
int main(){
	int n,k;
	printf("enter any number:");
	scanf("%d",&n);
	k=factorial(n);
	printf("%d",k);
	
	
}
int factorial(int n){
	int i=1,j=1;
	for(i=1;i<=n;i++){
		j=j*i;

	}

		return j;			
	
}
