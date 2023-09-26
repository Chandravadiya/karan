#include<stdio.h>
void main(){
	int a=1,n,b;
	printf("enter value of n:");
	scanf("%d",&n);
	while(a<=10){
		
		printf("%d*%d =%d",n,a,a*n);
		a++;
		printf("\n");
	}
}
