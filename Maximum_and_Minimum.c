#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int min=0,max=0;
    for(int i=0;i<n/2;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(arr[i]==count ){
            if(min==0 || min>arr[i]){
                min = arr[i];
            }
            if(max==0 || max<arr[i]){
                max = arr[i];
            }
        }
    }
    if(min==0 && max==0){
        printf("-1");
    }
    else{
        printf("%d %d",min,max);
    }
}