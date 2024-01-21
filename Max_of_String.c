#include<stdio.h>
int main(){
    char str[100];
    scanf("%[^
]s",str);
    char m =NULL;
    for(int i=0;str[i]!=NULL;i++){
        if(str[i]>m){
            m=str[i];
        }
    }
        printf("%c",m);
}