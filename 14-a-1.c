#include<stdio.h>
void main(){
	int n,i=0;
	printf("enter array size n:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		printf("enter value of array a[%d]:",i);
		scanf("%d",&a[i]);
	}
	printf("normal order\n");
	for(i=0;i<n;i++){
		printf("%d",a[i]);
	}
	printf("\nrevers order\n");
	for(i=n-1;i>=0;i--){
		printf("%d",a[i]);
	}
}
