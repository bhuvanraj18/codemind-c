#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=2;j<=n+1;j++){
            printf("%d ",i%2);
        }
        printf("
");
    }
}