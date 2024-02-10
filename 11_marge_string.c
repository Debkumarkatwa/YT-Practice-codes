#include<stdio.h>
#include<string.h>

int main(){
    char firststring[50];
    char secondstring[50];

    printf("Write first Statement:: ");
    fgets(firststring,50,stdin);

    printf("Write second Statement:: ");
    fgets(secondstring,50,stdin);

    int lenght=strlen(firststring)+strlen(secondstring)+1;
    char marge[lenght];
    strcpy(marge,firststring);
    strcat(marge,secondstring);
    printf("New marged string is ");
    puts(marge);

   return 0;
}
