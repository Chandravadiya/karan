#include<stdio.h>
void main(){
	int a=10,*p;
	float b=9.0,*q;
	double c=11.0,*r;
	char d='g',*s;

	p=&a;
	q=&b;
	r=&c;
	s=&d;
	printf("for int=%d %d\n",p,*p);
	printf("for float=%d %f\n",q,*q);
	printf("for double=%d %lf\n",r,*r);
	printf("for char=%d %c",s,*s);
	
}
