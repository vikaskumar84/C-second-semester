#include <stdio.h>
int main(){
    int a,f=0;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<a;i++){
        f=0;
        for(int j=0;j<i;j++){
            if(arr[i]==arr[j]){
                f=1;
                break;
            }
        }
        if(!f){
            printf("%d ",arr[i]);
        }

    }
    
}






    
   
