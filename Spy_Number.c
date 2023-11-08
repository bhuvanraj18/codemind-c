#include<stdio.h>
int main(){
    int n,a,b,sum=0,pro=1;
    scanf("%d",&n);
    while(n>0){
        a=n%10;
        sum+=a;
        pro*=a;
        n=n/10;
    }
    if(sum==pro){
        printf("Spy Number");
    }
    else{
        printf("Not Spy Number");
    }
}