#include<stdio.h>
void main(){
	int j,k,i,n,m=1;
	
	int a[20][2];
	for(i=0;i<20;i++){
		for(j=1;j<2;j++){
			printf("enter roll number %d marks:",m++);
			
			scanf("%d",&a[i][j]);
		}
	}
		m=1;
		for(i=0;i<20;i++){
		for(j=0;j<2;j++){
			if(j==0){
				printf("roll number:%d   ",m++);
			}
			else{
				printf("marks:%d",a[i][j]);
			}
		}
		printf("\n");
	}

}

