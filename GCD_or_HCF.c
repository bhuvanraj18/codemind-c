#include<stdio.h>
int main()
{
int a,b,i,m,gcd;
scanf("%d%d",&a,&b);
for(i=1;i<=b;i++){
m=a*i;
if(m%b==0){
gcd=a*b/m;
break;
}
}
printf("%d",gcd);
}
