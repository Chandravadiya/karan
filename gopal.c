#include<stdio.h>
void main(){
	int a,b=1;
	printf("enter value of a:");
	scanf("%d",&a);
	while(a>=1){
		b=b*a;
		a--;
	}
	printf("%d",b);
}
