#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    float avg,sum=0;
    for(int i=0;i<n;i++){
    sum+=arr[i];
    }
    avg=sum/n;
    printf("%.2f",avg);
}