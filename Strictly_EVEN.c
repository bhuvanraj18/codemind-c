#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2!=0 && i%2!=0){
            count++;
        }
    }
    if(count>=n/2){
        printf("True");
    }
    else{
        printf("False");
    }
}