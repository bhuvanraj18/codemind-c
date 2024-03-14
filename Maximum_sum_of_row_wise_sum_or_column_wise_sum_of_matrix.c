#include<stdio.h>
int main(){
    int m,n;
    scanf("%d %d",&m,&n);
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int maxr=0,maxc=0;
    for(int i=0;i<m;i++){
        int sum1=0;
        for(int j=0;j<n;j++){
            sum1+=arr[i][j];
        }
        if(sum1>maxr){
            maxr=sum1;
        }
    }
     for(int i=0;i<n;i++){
        int sum2=0;
        for(int j=0;j<m;j++){
            sum2+=arr[j][i];
        }
        if(sum2>maxc){
            maxc=sum2;
        }
    }
    if(maxr>maxc){
        printf("%d",maxr);
    }
    else{
        printf("%d",maxc);
    }
}