#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=2;i<=n+1;i++){
        for(int j=1;j<=n;j++){
            printf("%d ",j%2);
        }
        printf("
");
    }
}