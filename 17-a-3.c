#include<stdio.h>
void main(){
	int a,b,*p,*q;
	printf("enter any two values =");
	scanf("%d %d",&a,&b);
	p=&a;
	q=&b;
	printf("sum of two pointer is=%d",*p+*q);
}
