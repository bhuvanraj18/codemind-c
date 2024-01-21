#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    char str[100];
    for(int i=1;i<=t;i++){
        int count=0;
        scanf("%s",str);
        for(int i=0;str[i]!=NULL;i++){
            if(str[i]>='0' && str[i]<='9'){
                count++;
                break;
            }
        }
        if(count==0){
            printf("No
");
        }
        else{
            printf("Yes
");
        }
    }
}
    