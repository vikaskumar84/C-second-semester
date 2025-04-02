#include<stdio.h>
int main(){
    int a; 
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<a;i++){
        for(int j=a-1;j>=0;j--){
            if(arr[i]==arr[j]){
                printf("palindrome");
                return 0;
            }
            else{
                printf("not");
                return 0;
            }

        }
    }
}


