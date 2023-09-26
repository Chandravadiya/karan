#include<stdio.h>
void main(){
int a,b=1;
printf("enter your number:");
scanf("%d",&a);
while(b<=a){
	if(a%b==0){
		printf("%d",b);
		printf("\n");
	}
	b++;
	
}
}
