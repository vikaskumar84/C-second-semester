
#include<stdio.h>
int reverse(int arr[],int a,int b){
    for(int i=a,j=b;i<=j;i++,j--){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    return 0;
}
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    reverse(arr,1,4);
    
    
    for(int i=0;i<a;i++){
        printf("%d ",arr[i]);
    }

}
        
    
    
