#include <stdio.h>
 int main(){
     int a;
     scanf("%d",&a);
     char arr[a];
     char brr[a];
     for(int i=0;i<a;i++){
         scanf("%d",&arr[i]);
     }
     for(int i=0;i<a;i++){
         brr[i]=arr[i+1];
 
     }
     brr[a-1]=arr[0];
     for(int i=0;i<a;i++){
     printf("%d ",brr[i]);
     }
 
 }
 
 
 
