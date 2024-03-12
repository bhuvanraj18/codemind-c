#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int sum=0,is_super=0;
    for(int i=0;i<n;i++){
        int count = 0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
            count++;
            }
        }
        if(count==arr[i]){
            sum+=arr[i];
            is_super++;
            arr[i]=0;
        }
    }
    if(sum==0){
       printf("-1");
    }
    else{
        float avg = (sum*1.0)/(is_super*1.0);
        printf("%.2f",avg);
    }
}