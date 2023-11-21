#include<stdio.h>
int main(){
    int a,b,n,i,count;
    scanf("%d %d",&a,&b);
    for(i=a;i<=b;i++){
        count=0;
       int s = 0;
       int t = i;
        while(t > 0){ 
            
            n=t%10;
            t /= 10;
            s++;
            if( n == 0){
                break;
            } else {
                if  ( i % n == 0){
                    s--;
                }
            }
            
        }
    if(s == 0){
        printf("%d ",i);
    }
    }
}