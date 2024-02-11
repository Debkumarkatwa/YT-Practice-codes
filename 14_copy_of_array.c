#include<stdio.h>
#include<stdlib.h>

int* copy_array(int *a,int b);

int main(){
    int range;

    printf("Enter the size of array:: ");
    scanf("%d",&range);

    int* array=malloc(range*sizeof(int));
    printf("Enter the Elements of array:: ");

    for(int i=0;i<range;i++){
        scanf("%d",&array[i]);
    }

    int *copy=copy_array(array,range);
    for(int i=0;i<range;i++){
        printf("%d\t",copy[i]);
    }
    return 0; 

}
int* copy_array(int *a,int b){
    int* c=malloc(b*sizeof(int));
    for(int i=0;i<b;i++){
        c[i]=a[i];
    }
    return c;
}