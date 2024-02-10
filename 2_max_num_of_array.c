#include<stdio.h>

int main(){

    int large=0,range;

    printf("Write your range:: ");
    scanf("%d",&range);

    int a[range];

    for(int i=0;i<range;i++){
        printf("Enter tne number:: ");
        scanf("%d",&a[i]);
    }

    for(int i=0;i<range;i++){
        large=(large>a[i])?large:a[i];
    }
    printf("\n%d is the largest...................",large);

    return 0; 

}