#include<stdio.h>
void main(){
	int x,y,z=1,i=1;
	printf("enter value of x and y:");
	scanf("%d %d",&x,&y);
	while(i<=y){
		z*=x;
		i++;
		
	}
	printf("%d",z);
}
