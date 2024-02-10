#include<stdio.h>

int main(){
    float temp,F;
   
    printf("Write your Tempreture in celcius:: ");
    scanf("%f",&temp);

    F=1.8*temp+32;

    printf("Tempreture %f in Fehreneit is :: '%f' ",temp,F);

   return 0;
}