#include<stdio.h>
void sum (int,int);
void main(){
	int a,b;
	scanf("%d %d",&a,&b);
	sum(a,b);}
		

void sum(int a,int b){
	int sum=0;
	sum=a+b;
	printf("sum=%d",sum);
}
