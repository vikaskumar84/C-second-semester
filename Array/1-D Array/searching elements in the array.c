#include<stdio.h>
int main(){
    int a, f=0; 
    scanf("%d",&a);
    int arr[a],x=12;
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<a;i++){
            if(arr[i]==x){
                f=1;
                break;
            }
    }
            if(f==1){
                printf("%d is present in the array",x);
            }
    else{
        printf("%d is not present in the array",x);
    }
}



