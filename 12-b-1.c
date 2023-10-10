#include<stdio.h>
void main(){
	int i=0,j,n,s1,s2=0;
	scanf("%d",&n);
	for(i=n;i>0;i--)
	{
		for(j=1;j<=i;j++){
			s1=s1+j;
			
		}
		s2=s2+s1;
		
		
	}
	printf("%d",s2);
}
