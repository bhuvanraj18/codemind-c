#include<stdio.h>
int main(){
    int a,b,c,x,n;
    scanf("%d",&x);
    a=x%10;
    b=(x%100)/10;
    c=(x%1000)/100;
    n=a+b+c;
    if(n%9==0){
        printf("True");
    }
    else{
        printf("False");
    }
}