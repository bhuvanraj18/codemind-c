#include<stdio.h>
int main(){
    int a,b,n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d %d",&a,&b);
    int sum=0;
    for(int i=0;i<n;i++){
        if(a>arr[i] || b<arr[i]){
            sum+=arr[i];
        }
    }
    printf("%d",sum);
}