#include<stdio.h>

int main(){

    int range,a=0,b=1;

    printf("Write your range:: ");
    scanf("%d",&range);

    printf("%d\t",a);
    printf("%d\t",b);

    for(int i=1;i<=range-2;i++){
        int c=a;
        a=b;
        b=a+c;
        printf("%d\t",b);
    }

   return 0;
}