#include<stdio.h>
int main(){
    int n,a,b;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int i,j;
    for(i=0,j=n-1;i<j;i++,j--){ //two pointers approach
        printf("%d %d ",arr[i],arr[j]);
    }
    if(n%2!=0){
        printf("%d %d ",arr[i],0);
    }
}