#include<stdio.h>
void main(){
	int n,i=0;

	printf("enter array size:");
	scanf("%d",&n);
		int a[n];
	for(i=0;i<n;i++){
		printf("enter array value of a[%d]:",i);
		scanf("%d",&a[i]);
	}
	int *p;
	p=&a;
			for(i=0;i<n;i++){
				printf("%d",*p++);
			}	
}
