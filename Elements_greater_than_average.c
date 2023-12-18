#include<stdio.h>
int main(){
    int n,sum=0,count=0,avg;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    for(int i=0;i<n;i++){
        avg=sum/n;
        if(arr[i]>=avg){
            count++;
        }
    }
    printf("%d",count);
}