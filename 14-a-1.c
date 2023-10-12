#include<stdio.h>
void main(){
	int n,m,i,j,a[n];
	printf("enter array size:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("enter value of array:");
		scanf("%d",&a[i]);
		
	}
	for(m=0;m<n;m++){
		printf("here is your array: %d\n",a[m]);
	}

	for(j=(n-1);j>=0;j--){
			printf("your output is:");
			printf("\n");
		printf("your array index a[%d]:",j);
		printf("%d",a[j]);
		printf("\n");
	}
}
