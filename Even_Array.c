#include<stdio.h>
int main(){
    int n,flag=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]%2!=0){
            printf("False");
            flag=1;
            break;
        }
    }
    if(flag==0){
        printf("True");
    }
}