#include<stdio.h>
void main(){
	int i,j,n=6,k;
	for(i=0;i<=n;i++)
	{
		if(i!=6){
			for(j=1;j<=n-i;j++){
			printf(" ");
		}
		for(k=1;k<=i;k++){
			printf("* ");
		}
		printf("\n");
		}
		
		
	}
}

