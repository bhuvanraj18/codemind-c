#include<stdio.h>
int main(){
    char str[100];
    scanf("%[^
]s",str);
    int count=1;
    for(int i=1;str[i]!=NULL;i++){
        if(str[i]>=65 && str[i]<=91){
            count++;
        }
    }
    printf("%d",count);
}