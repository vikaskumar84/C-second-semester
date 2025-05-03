#include<stdio.h>
#include<string.h>
#include<ctype.h>


int main(){
    int alpha_count=0,digit_count=0,count_specialsymbol=0;
    char str[100];
    fgets(str,100,stdin);
    
for(int i=0;str[i]!='\0';i++){
    if(isalpha(str[i])){
        alpha_count+=1;
    }
    else if(isdigit(str[i])){
        digit_count+=1;
    }
    else if (str[i]!=' '&& str[i]!='\n'){
        count_specialsymbol+=1;
    }
}
    printf("alphabet=%d\n",alpha_count);
    printf("digits=%d\n",digit_count);
    printf("special sybmols=%d\n",count_specialsymbol);

}
