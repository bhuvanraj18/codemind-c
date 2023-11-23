#include<stdio.h>
int main(){
    int a,b,c,i,gcf;
    scanf("%d %d",&a,&b);
    for(i=1;i<=b;i++){
        c=a*i;
        if(c%b==0){
            gcf=(a*b)/c;
            break;
        }
    }
    printf("%d",gcf);
    
}