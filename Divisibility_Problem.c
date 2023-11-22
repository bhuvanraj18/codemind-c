#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a%b!=0){
        printf("%d",b-(a%b));
    }
    else{
        printf("0");
    }
}