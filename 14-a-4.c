#include<stdio.h>
void main(){
	int n,i=0,max=0;
	float sum=0,avg;
	printf("enter array size n:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		printf("enter value of array a[%d]:",i);
		scanf("%d",&a[i]);
	}
	int min=a[0];
	for(i=0;i<n;i++){
		if(a[i]>max){
			max=a[i];
		}
	
		}
		printf("maximume value is:%d\n",max);
	
		for(i=0;i<n;i++){
		if(a[i]<min){
			min=a[i];
		}
	
		}
		printf("minimume value is:%d\n",min);
	
		for(i=0;i<n;i++){
		sum=sum+a[i];
			
		}
	
		
		printf("sum value is:%f\n",sum);
		
		printf("avg value is:%f\n",sum/n);
	}


