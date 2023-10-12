#include<stdio.h>
void main(){
	int n,sum=0,i,j,k,m,p,q,a[5];
	
	for(i=0;i<n;i++){
		printf("enter  height values in centimiter:\n");
		scanf("%d",&a[i]);
		printf("enter weight values in kilogarm:\n");
		scanf("%d",&a[j]);
		}
		
		for(i=0;i<n;i++){
		if(a[i]>170)
		{
			k++;
		}
		else{
			m++;
		}
		for(j=0;j<n;j++){
			if(a[j]<50){
				p++;
			}
			else{
				q++;
			}
		}	
	
}
printf("count of person height grater 170:%d",k);
printf("count of person weight less 50:%d",p);



}
