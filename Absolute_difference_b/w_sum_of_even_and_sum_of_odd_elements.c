#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int diff,even=0,odd=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            even+=arr[i];
        }
        else if(arr[i]%2!=0){
            odd+=arr[i];
        }
    }
    diff=abs(even-odd);
    printf("%d",diff);
    
}