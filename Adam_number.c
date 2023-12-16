#include<stdio.h>
int main(){
    int a,b,c=0,d=0,p,q,n;
    scanf("%d",&n);
    q=n;
    a=n*n;
    while(a!=0){
        b=a%10;
        c=c*10+b;
        a/=10;
    }
    while(n!=0){
        p=n%10;
        d=d*10+p;
        n/=10;
    }
    if(d*d==c && q%10!=0){
        printf("True");
    }
    else{
        printf("False");
    }
}