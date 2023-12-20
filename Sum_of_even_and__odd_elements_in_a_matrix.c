#include<stdio.h>
int main(){
    int m,n,i,j;
    scanf("%d%d",&m,&n);
    int arr[m][n];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int even=0,odd=0;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(arr[i][j]%2==0){
                even+=arr[i][j];
            }
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(arr[i][j]%2!=0){
                odd+=arr[i][j];
            }
        }
    }
     printf("%d ",even);
      printf("%d ",odd);
     
}