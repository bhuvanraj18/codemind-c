#include <stdio.h>
int main()
{
    char str[100];
    int i,length=0;
    scanf("%s",str);
    for(i=0; str[i]!=NULL; i++)
    {
        length++; 
    }
    
    printf("%d",length);
}