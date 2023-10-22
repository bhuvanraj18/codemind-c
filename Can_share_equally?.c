#include<stdio.h>
int main(){
    int x,y,z;
    scanf("%d %d",&x,&y);
    z=x+(2*y);
    if(x%2!=0){
        printf("NO");
    }
    else if(x==0 && y%2!=0){
        printf("NO");
    }
    else{
        printf("YES");
    }
}