#include<stdio.h>

int main(){

    int sum,range;

    printf("Write your range:: ");
    scanf("%d",&range);

    int a[range];

    for(int i=0;i<range;i++){
        printf("Enter the number:: ");
        scanf("%d",&a[i]);
    }

    for(int i=0;i<range;i++){
        sum+=a[i];
    }
    printf("\nSum of all elements is %d ...................",sum);

    return 0; 

}