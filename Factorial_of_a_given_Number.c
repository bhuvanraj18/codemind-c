#include<stdio.h>
int main(){
	int i,n,m=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
	m*=i;
	}
	printf("%d",m);
}