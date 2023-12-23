#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int flag =0;
    for(int i=0;i<n;i++){
        int occ=0;
        int vis=0;
        for(int j=0;j<n;j++){
        if(j<i && arr[i]==arr[j]){
            vis=1;
            break;
        }
        if(arr[i]==arr[j]){
            occ++;
        }
        }
        if(vis==0 && arr[i]==occ){
            printf("%d ",arr[i]);
            flag=1;
        }
    }
    if(flag==0){
        printf("-1");
    }
}