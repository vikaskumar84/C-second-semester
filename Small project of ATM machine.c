#include<stdio.h>
int main(){
    int amount,current_balance=1000,withdraw,deposite;
;
;
    printf("WELCOME TO CANARA BANK ATM CARD............\n");
    int attempt=0,max_attempt=3;
    while(attempt<max_attempt){
        int PIN;
        printf("Enter your four digit PIN\n");
        scanf("%d",&PIN);
        int const_PIN=1234;
        if(const_PIN==PIN){
            printf("PIN Verified\n");
            int choice;
            printf("1.check balance\n 2.withdraw cash\n 3.deposite cash\n 4.exit\n");
            scanf("%d",&choice);
            if(choice==1){
                printf("%d",current_balance);
                break;
            }
            else if (choice==2){

                printf("enter your amount..........\n");
                scanf("%d",&withdraw);
                if(withdraw<current_balance){
                    current_balance=current_balance-withdraw;
                    printf("please collect your amount  %d\n",withdraw);
                    printf("\nremaining amount %d\n",current_balance);
                    break;
                }
                else{
                    printf("balance is'nt sufficient\n");
                    break;
                }
            }
            else if(choice==3){
                
                printf("enter your amount.............\n");
                scanf("%d",&deposite);
                printf("%d has been deposited",deposite);
                current_balance=current_balance+deposite;
                printf("\ncurrent balance in your account %d\n",current_balance);
                break;
            }
            else if(choice==4){
                printf("thank you for using canara bank ATM\n");
                break;
            }
            else{
                printf("invalid choice..................\n");
                break;
            }
        }
        else{
            printf("please enter currect PIN.............\n");
            attempt+=1;
        }
    }
    if(attempt==max_attempt){
        printf("your card has been blocked due to 3 incorrect attempts\n");
    }

}
