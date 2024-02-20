#include<stdio.h>

double sum(int a);

int main(){
    
    int last_num;
    printf("Enter the range of number:: ");
    scanf("%d",&last_num);

    printf("The sum of '0' to '%d' is \"%0.1lf\"",last_num,sum(last_num));

    return 0;
}

double sum(int a){
    if(a==0){
        return 0;
    }
    else{
        return a+sum(a-1);
    }
}