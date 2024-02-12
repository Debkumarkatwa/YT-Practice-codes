#include<stdio.h>
#include<stdlib.h>

float vactor_add(float *a,float *b,int d);

int main(){

    int size;
    printf("Enter the size of the arrays:: ");
    scanf("%d",&size);

    float *vactor1,*vactor2;

    vactor1=malloc(size*sizeof(float));
    printf("Elements of vactor1:: ");
    for(int i=0;i<size;i++){
        scanf("%f",&vactor1[i]);
    }

    vactor2=malloc(size*sizeof(float));
    printf("Elements of vactor2:: ");
    for(int i=0;i<size;i++){
        scanf("%f",&vactor2[i]);
    }

    printf("Dot product of the Arrays is:: %f",vactor_add(vactor1,vactor2,size));
   
    return 0; 

}
float vactor_add(float *a,float *b,int d){
    float c=0;
    for(int i=0;i<d;i++){
        c+=(a[i]*b[i]);
    }
    return c;
}