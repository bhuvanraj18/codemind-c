#include<stdio.h>
int main(){
    int n,a,b;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d %d",&a,&b);
    int count=0;
    for(int i=0;i<n;i++){
        if(a>arr[i] || b<arr[i]){
            printf("%d ",arr[i]);
            count=1;
        }
    }
    if(count==0){
        printf("-1");
    }
}