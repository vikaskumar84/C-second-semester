#include<stdio.h>
int main()
{
    int n ;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for (int i  = 0 ; i <n ; i++)
    {
        int f=0;
        for (int j = i+1 ; j <n ; j++)
        {
            if(arr[i]==arr[j])
            {
                f=1;
            }
                
        } 
        if(f){
            printf("%d is duplicate elements \n",arr[i]);
        }
        else{
            printf("%d unique elements \n",arr[i]);
        }
    }
    
}
