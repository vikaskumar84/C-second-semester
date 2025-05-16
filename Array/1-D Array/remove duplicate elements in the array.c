#include<stdio.h>
int main()
{
    int n ,count=0;
    scanf("%d",&n);
    int arr[n];
    int brr[n];
    int new_arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        brr[i]=arr[i];
    }

    for (int i  = 0 ; i <n ; i++)
    {
        int f=0;
        for (int j = i+1 ; j <n ; j++)
        {
            if(arr[i]==brr[j])
            {
                count+=1;
                continue;
                
            }
            else{
                new_arr[i]=arr[i];

            }
        }
    }
    printf("old arrray\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");

    printf("new array\n");
    
    for(int i=0;i<n-count;i++){
        printf("%d ",new_arr[i]);
    }
}
