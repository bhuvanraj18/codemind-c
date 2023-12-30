#include<stdio.h>
#include<ctype.h>
int main(){
    char str[20];
    scanf("%[^
]s",str);
    for(int i=0;str[i]!=NULL;i++){
        int a=tolower(str[i]);
        printf("%c",a);
    }
}