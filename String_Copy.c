#include<stdio.h>
#include<string.h>
int main(){
    char str1[20],str2[20];
    scanf("%[^
]s %[^
]s",str1,str2);
    printf("%s",strcpy(str2,str1));
}