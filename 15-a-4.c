#include<stdio.h>
void main(){
	int n,i,j,m=0,k;
	printf("enter array size:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		printf("array of a[%d] is ",i);
		scanf("%d",&a[i]);
	}
	printf("enter search element:");
	scanf("%d",&k);
	for(i=0;i<n;i++){
		if(a[i]==k){
			printf("a[%d]=%d\n",i,a[i]);
		}
		
			
		}
		
	
	

}
