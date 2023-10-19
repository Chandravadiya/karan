#include<stdio.h>
void main(){
	char a[100];
	printf("enter a string:");
	gets(a);
	int i=0,count=0;
	for(i=0;a[i]!='\0';i++){
		count++;
	}
	printf("your string length is:%d",count);
}
