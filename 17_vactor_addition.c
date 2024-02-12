#include<stdio.h>
#include<stdlib.h>

void vactor_add(float *a,float *b,float *c,int d);

int main(){

    int size;
    printf("Enter the size of the arrays:: ");
    scanf("%d",&size);

    float *vactor1,*vactor2,*add;
    add=malloc(size*sizeof(float));

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

    vactor_add(vactor1,vactor2,add,size);
    printf("Elements of add:: ");
    for(int i=0;i<size;i++){
        printf("%f\t",add[i]);
    }
    return 0; 

}
void vactor_add(float *a,float *b,float *c,int d){
    for(int i=0;i<d;i++){
        c[i]=a[i]+b[i];
    }
}