#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    int len=0;
    char str[100];
    fgets(str,100,stdin);
     for(int i=0;str[i]!='\0';i++){
        if(str[i]!=' ' && str[i]!='\n'){
            continue;
        }
    }
    for(int i=0;str[i]!='\0';i++){
        str[i]=toupper(str[i]);
    }
    for(int i=0;str[i]!='\0';i++){
        printf("%c",str[i]);
    }

}
    







    
