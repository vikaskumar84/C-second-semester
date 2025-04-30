#include <stdio.h>

int main()
{
    int arr[10]={1,2,9,5,3,7,8,4,10};
    int max=arr[0],smax;
    
    for(int i=0;i<10;i++){
        if(max<arr[i]){
            smax=max;
            max=arr[i];
        }
        else if(smax<arr[i] && max!=arr[i]){
            smax=arr[i];

            
        }
        
    }
                printf("%d",smax);
  
 return 0;
}
