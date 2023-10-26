#include<stdio.h>
void main(){
	int j,k,i,n;
	printf("enter value of row and collum:");
	scanf("%d %d",&n,&k);
	int a[n][k],c[n][k],b[n][k];
	for(i=0;i<n;i++){
		for(j=0;j<k;j++){
			printf("enter array [%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<k;j++){
			printf("enter array [%d][%d]",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<k;j++){
		printf("c[%d][%d]=%d  ",i,j,a[i][j]+b[i][j]);
		}
		printf("\n");
	}
}
