#include<stdio.h>
#include<string.h>

int main(){
    int len=0;
    char str[100];
    fgets(str,100,stdin);
    for(int i=0;str[i]!='\0';i++){
        if(str[i]!=' ' && str[i]!='\n'){
            len+=1;
        }
    }
    for(int i=len;i>=0;i--){
        printf("%c",str[i]);
    }
}
    







    
