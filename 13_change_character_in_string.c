#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    
    char str[50];

    printf("Write your statement:: ");
    fgets(str,50,stdin);
    puts(str);

    for(int i=0;str[i]!='\0';i++){
    	if(isupper(str[i])){
            str[i]= tolower(str[i]);
        }
        else if(islower(str[i])){
            str[i]= toupper(str[i]);
        }
    }

    puts(str);

   return 0;
}