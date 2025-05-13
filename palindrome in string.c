#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){ 
    int len=0,f=1;;
    char str[100];
    fgets(str,100,stdin);
    for(int i=0;str[i]!='\0';i++){
        if(str[i]!=' ' && str[i]!='\n'){
            len+=1;
            continue;
        }
    }
    for(int i=0;i<len/2;i++){
        if(str[i]!=str[len-1-i]){
            f=0;
            break;
        }
    }
    if(f==1){
        printf("palindrome");
    }
    else{
        printf("not");
    }
}








    
