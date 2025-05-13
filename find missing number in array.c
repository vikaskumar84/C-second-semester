#include <stdio.h>

int main()
{
    int num;
    scanf("%d",&num);
    int arr[num];
    for(int i=0;i<num-1;i++){
        scanf("%d",&arr[i]);
    }
    int total_sum=num*(num+1)/2;
    int arr_sum=0;
        for(int i=0;i<num-1;i++){
            arr_sum+=arr[i];
        }
        int missing_number=total_sum-arr_sum;
        printf("%d",missing_number);

    return 0;
}
