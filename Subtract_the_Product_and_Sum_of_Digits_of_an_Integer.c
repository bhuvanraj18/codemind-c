#include<stdio.h>
int main(){
    int n,a,sum=0,pro=1;
    scanf("%d",&n);
    while(n>0){
        a=n%10;
        pro*=a;
        sum+=a;
        n=n/10;
    }
    printf("%d",pro-sum);
}