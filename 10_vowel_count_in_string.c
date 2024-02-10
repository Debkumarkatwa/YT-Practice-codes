#include<stdio.h>
#include<string.h>

int main(){
    
    int count=0;
    char str[50];
    char vowel[]="AEIOUaeiou";

    printf("Write your statement:: ");
    fgets(str,50,stdin);

    for(int i=0;str[i]!='\0';i++){
        for(int j=0;j<10;j++){
            if(str[i]==vowel[j]){
                count++;
                break;
            }
        }
    }

    printf("Total vowel in String is %d",count);

   return 0;
}