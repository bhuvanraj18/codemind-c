#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b+c || (a-(b+c)>=50)){
        printf("Gryffindor");
}
else if(b>a+c || (b-(a+c)>=50)){
    printf("Slytherin");

}

else if(c>a+b || (c-(a+b)>=50)){
    printf("Hufflepuff");
}
else{
    printf("NOTA");
}
}
