#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){ 
    int len=0,f=1;;
    char str[100];
    char str1[100];

    fgets(str,100,stdin);
    for(int i=0;str[i]!='\0';i++){
        if(str[i]!=' ' && str[i]!='\n'){
            continue;
        }
    }
    fgets(str1,100,stdin);
    for(int i=0;str1[i]!='\0';i++){
        if(str1[i]!=' ' && str1[i]!='\n'){
            continue;
        }
    }
    if(strcmp(str,str1)==0){
        printf("same");
    }
    else{
        printf("not same");
    }

}








    
