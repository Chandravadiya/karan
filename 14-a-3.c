#include<stdio.h>
void main(){
	int n,m=0,k=0,i,j,a[n];
	printf("enter array size:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("enter your array value:\n");
		scanf("%d",&a[i]);}
		
		for(i=0;i<n;i++){
		
	
	if(a[i]%2==0){
			m++;	
	}
	else{
		k++;
	}
}
printf("your even values is:%d\n",m);

printf("your odd values is:%d\n",k);
}
