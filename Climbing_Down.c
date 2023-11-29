#include<stdio.h>
int main(){
     float a,b,c,d;
    scanf("%f %f %f %f",&a,&b,&c,&d);
    if(a/c<b/d){
     printf("Walter");
    }
    else if(a/c>b/d){
        printf("Jesse");
    }
    else{
        printf("Both");
    }
}