#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    int j=0;
    char str[100];
    char nospace[100];
    fgets(str,100,stdin);
    for(int i=0;str[i]!='\0';i++){
        if(str[i]!=' '){
            nospace[j]=str[i];
            j++;
        }
    }
    nospace[j]='\0';
    for(int j=0;str[j]!='\0';j++){
        printf("%c",nospace[j]);
    }
}








    
