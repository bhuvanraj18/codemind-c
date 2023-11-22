#include<stdio.h>
int main(){
    int n=0,i,m=0,a;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        n+=i*i;
        m+=i;
    }
    printf("%d",(m*m)-n);
}