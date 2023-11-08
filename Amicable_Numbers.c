#include<stdio.h>
int main(){
    int a,b,i,sum1=0,sum2=0;
    scanf("%d %d",&a,&b);
    for(i=1;i<a;i++){
        if(a%i==0){
            sum1+=i;
        }
    }
    for(i=1;i<b;i++){
        if(b%i==0){
            sum2+=i;
        }
    }
    if(a==sum2 && b==sum1){
        printf("Amicable");
    }
    else{
        printf("Not Amicable");
    }
    

    
}