#include<stdio.h>

int main(){

    float sum;
    int range;

    printf("Write your range:: ");
    scanf("%d",&range);

    float a[range];

    for(int i=0;i<range;i++){
        printf("Enter tne number:: ");
        scanf("%f",&a[i]);
    }

    for(int i=0;i<range;i++){
        sum+=a[i];
    }

    float avarage=sum/range;
    printf("\nAvarage of all elements is %f ...................",avarage);

    return 0; 

}