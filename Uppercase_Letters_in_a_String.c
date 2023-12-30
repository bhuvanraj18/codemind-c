#include<stdio.h>
int main(){
    char str[100],count=0;
    scanf("%[^
]s",str);
    for(int i=0;str[i]!=NULL;i++){
       if(str[i]>='A'&&str[i]<='Z'){
            count++;
        }
    }
    printf("%d",count);
}