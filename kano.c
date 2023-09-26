#include<stdio.h>
void main(){
char ch='A';
while(ch<='z')
{
	if((ch>='A'&& ch<='z') || (ch>='a' && ch<='z')){
		printf("%c,",ch);
	}
	ch++;
}
}
