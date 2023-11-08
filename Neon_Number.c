#include<stdio.h>
int main(){
    int n,m,a,sum=0;
    scanf("%d",&n);
    a=n*n;
    while(a>0)    
{    
    m=a%10;    
    sum=sum+m;    
    a=a/10;    
}    
if(n==sum){
        printf("Neon Number");
    }
    else{
        printf("Not Neon Number");
    }
}