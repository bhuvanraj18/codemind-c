#include<stdio.h>
int main(){
    int t,count=0;
    scanf("%d",&t);
    char str[100];
    for(int i=1;i<=t;i++){
        scanf("%s",str);
        for(int i=0;str[i]!=NULL;i++){
         if(str[i]=='+' && str[i+1]=='+'){
             count++;
         }
         else if(str[i]=='-' && str[i+1] =='-'){
             count--;
         }
        }
    }
        printf("%d
",count);
}