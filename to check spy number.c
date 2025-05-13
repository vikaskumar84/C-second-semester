#include <stdio.h>

int main()
{
    int num,d,sum=0,product=1;
    scanf("%d",&num);
    
    while(num>0){
        d=num%10;
        sum+=d;
        product*=d;
        num=num/10;
        
    }
    if(sum==product){
    
    printf("spy number");
}
else{
    printf("not spy");
}
    return 0;
}
