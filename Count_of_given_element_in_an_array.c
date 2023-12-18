#include<stdio.h>
int main(){
    int n,a,count=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&a);
    for(int i=0;i<n;i++){
        if(a==arr[i]){
            count++;
        }
    }
    printf("%d",count);
}