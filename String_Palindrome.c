#include <stdio.h>
#include <string.h>
int main() {
    char str1[20];
    int i, len,flag=0;
    scanf("%s", str1);
    len = strlen(str1);
    for (i=0; i<len/2; i++) {
        if (str1[i] != str1[len-i-1]) {
            flag = 1;
            break;
        }
    }
    if (flag!=0) {
        printf("Not Palindrome");
    } else {
        printf("Palindrome");
    }
}

