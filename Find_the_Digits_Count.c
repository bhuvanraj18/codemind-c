#include<stdio.h>
int main(){
    int n,a,r,count=0;
    scanf("%d",&n);
    while(n!=0){
        n=n/10;
       count++;
    }
    printf("%d",count);
}