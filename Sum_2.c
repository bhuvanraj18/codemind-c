#include<stdio.h>
int main(){
    int i,a,b,x,y,num=0;
    scanf("%d %d %d %d",&a,&b,&x,&y);
    for(i=a;i<=b;i++){
        if(i%x==0 && i%y!=0){
            num+=i;
        }
    }
    printf("%d",num);
}