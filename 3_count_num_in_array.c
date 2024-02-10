#include<stdio.h>

int main(){

    int find,range,c=0;
    // printf("Write your range:: ");
    // scanf("%d",&range);
    int a[10];

    for(int i=0;i<10;i++){
        printf("Enter tne numbers(%d):: ",i+1);
        scanf("%d",&a[i]);
    }

    printf("Write the number you want to find:: ");
    scanf("%d",&find);

    for(int i=0;i<10;i++){
        if(a[i]==find){
            c++;
        }
    }

   printf("%d founded %d times in the array........",find,c);

    return 0; 
}