#include<stdio.h>
int main(){
    int n,a,b;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d %d",&a,&b);
    int max=0;
    for(int i=0;i<n;i++){
        if(a>arr[i] || b<arr[i]){
        if(max==0 || max<arr[i]){
            max=arr[i];
        }
    } 
    }
    if(max){
    printf("%d",max);
    }
    else{
        printf("-1");
    }

}