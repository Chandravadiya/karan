#include<stdio.h>
void main(){
	int n,m=0,k=0,i=0;
	printf("enter array size n:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		printf("enter value of array a[%d]:",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++){
		if(a[i]>0){
			m++;
		}
		else if(a[i]<0){
			k++;
		}
	}
	printf("positive number count is:%d\n",m);
	printf("nagative number count is:%d",k);
	
}
