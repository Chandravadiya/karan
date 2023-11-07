#include<stdio.h>
void compare (int,int);
void main(){
	int a,b;
	printf("enter any two number:");
	scanf("%d %d",&a,&b);
	compare(a,b);}
		

void compare(int a,int b){
	if(a>b)
{
	printf("max=%d  min=%d",a,b);
}
else{
	printf("max=%d  min=%d",b,a);
}
}

