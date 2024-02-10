#include<stdio.h>

int main(){

    int small,range;

    printf("Write your range:: ");
    scanf("%d",&range);

    int a[range];

    for(int i=0;i<range;i++){
        printf("Enter tne number:: ");
        scanf("%d",&a[i]);
    }

    small=a[0];

    for(int i=0;i<range;i++){
        small=(small<a[i])?small:a[i];
    }
    printf("\n%d is the smallest...................",small);

    return 0; 

}