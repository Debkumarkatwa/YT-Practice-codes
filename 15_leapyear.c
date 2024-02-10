#include<stdio.h>
#include<stdbool.h>

bool leapyear(int a);

int main(){

    int year;
    printf("Enter the year:: ");
    scanf("%d",&year);

    if(leapyear(year)){
        printf("This year %d is a Leapyear",year);
    }
    else{
        printf("This year %d is NOT a Leapyear............",year);
    }   

    return 0; 
}

bool leapyear(int a){
    if((a%4==0)&&((a%400==0)||(a%100!=0)))
        return 1;
    else
        return 0;
}
