#include<stdio.h>
int main(){
    int a;
    while(a!=-1){
        scanf("%d",&a);
        if(a==-1){
            continue;
        }
        printf("%d
",a*a);
}
}