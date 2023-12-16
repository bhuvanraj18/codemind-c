#include<stdio.h>
#include<math.h>
int main()
{
    int n,m,c=0,a,p,b;
    scanf("%d",&n);
    m=n*n;
    a=n;
    while(a != 0)
    {
        a/=10;
        c++;
    }
    p=pow(10,c);
    b=m%p;
    if(n==b)
    {
        printf("Automorphic Number");
    }
    else
    {
        printf("Not an Automorphic Number");
    }
    
}