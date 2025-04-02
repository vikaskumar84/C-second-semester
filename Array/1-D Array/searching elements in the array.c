#include<stdio.h>
int main(){
    int a; 
    scanf("%d",&a);
    int arr[a],x=12;
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int f=0;
    for(int i=0;i<a;i++){
            if(arr[i]==x){
                f=1;
                break;
            }
    }
            if(f==0){
                printf("%d is not present in the array",x);
            }
    else{
        printf("%d is present in the array",x);
    }
}



