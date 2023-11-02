#include<stdio.h>
void main(){
	int a,b,*p,*q,r;
	printf("enter any two values =");
	scanf("%d %d",&a,&b);
	p=&a;
	q=&b;
	
	printf("two pointer value is=%d %d\n",*p,*q);
	r=p;
	p=q;
	q=r;
	printf("your swap pointer is=%d %d",*p,*q);
	
}
