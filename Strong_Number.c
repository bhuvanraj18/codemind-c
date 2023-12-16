#include<stdio.h>
int main(){
    int t,a,b,n,count=0,fac=1;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        count=0,fac=1;
        scanf("%d",&a);
        b=a;
        while(b!=0){
            n=b%10;
            b/=10;
            fac=1;
            for(int j=1;j<=n;j++){
                fac=fac*j;
            }
            count=count+fac;
        }
        if(count==a){
            printf("Strong
");
        }
        else if(count!=a){
            printf("Not Strong
");
        }
    }
}