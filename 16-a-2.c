#include<stdio.h>
void main(){
	int j,k,i,n,p=0,m=0,q=0;
	printf("enter value of row and collum:");
	scanf("%d %d",&n,&k);
	int a[i][j];
	for(i=0;i<n;i++){
		for(j=0;j<k;j++){
			printf("enter array [%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
		for(j=0;j<k;j++){
			if(a[i][j]>0){
				m++;
			}
			else if(a[i][j]<0){
				p++;
			}
			else if(a[i][j]==0){
				q++;
			}
		}
		
	}
	printf("array positive number count:%d\n",m);
	printf("array negative number count:%d\n",p);
	printf("array zero number count:%d",q);
	
	
	
	
}
