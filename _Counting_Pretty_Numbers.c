#include<stdio.h>
int main(){
    int t,a,b,i,j,count;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d %d",&a,&b);
        count=0;
        for(j=a;j<=b;j++){
            if( j%10==2 || j%10==3 || j%10==9){
                count++;
            }
        }
    printf("%d
",count);
    }
}