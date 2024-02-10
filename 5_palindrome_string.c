#include<stdio.h>
#include<string.h>
#include<stdbool.h>

bool compare(char a[]);

void main(){

    char mystring[50];

    printf("Write your Statement:: ");
    fgets(mystring,50,stdin);

    if(compare(mystring)){
        printf("It's a palindrome string.............. ");
    }
    else{
        printf("SORRY.....It's not a palindrome string");
    }
}
bool compare(char a[]){
    char b[50]; 
    strcpy(b,a);
    strrev(a);
    for(int i=0;i!='\0';i++){
        if(a[i]!=b[i]){
            return false;
        }
        return true;
    }
}