#include<stdio.h>
int main(){
    int n,b,c=0;
    scanf("%d",&n);
    int arr[n];
    
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&b);
    for(int i=0;i<n;i++){
        if(b==arr[i]){
            printf("True");
            c=1;
            break;
        }
    }
    if(c==0){
        printf("False");
    }
    
}