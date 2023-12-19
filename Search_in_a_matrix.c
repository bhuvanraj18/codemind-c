#include <stdio.h>  
int main() {  
   int a,m,n;  
   scanf("%d%d",&m,&n);  
   int arr1[m][n];
   for (int i=0;i<m;i++){  
      for (int j=0;j<n; j++){  
         scanf("%d",&arr1[i][j]);  
      }  
   }
   int count=0;
   scanf("%d",&a);
   for (int i=0;i<m;i++){  
      for (int j=0;j<n; j++){  
         if(a==arr1[i][j]){
             count++;
         } 
      }  
   }
   if(count!=0){
       printf("1");
   }
   else if(count==0){
       printf("0");
   }
   
}  