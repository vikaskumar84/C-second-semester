#include <stdio.h>

int main()
{
    int num;
    scanf("%d",&num);
    for(int i=2;i<num;i++){
        int f=1;
        for(int j=2;j<i;j++){
            if(i%j==0)
            {
            f=0;
            break;
            }
        }
    
        if(f==1){
            printf("%d is prime \n",i);
            
        }
        else{
            printf("%d is not prime \n",i);
        }
    }
        
    return 0;
}
