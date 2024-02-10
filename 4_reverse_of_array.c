#include<stdio.h>

int main(){

    int n,x,originalN;

    printf("Enter the size of the array:: ");
    scanf("%d",&n);

    originalN=n;

    int a[n];
    
    for(int i=0;i<n;i++){
        printf("Enter the %delement of the array:: ",i);
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        n=n-1;
        x=a[i];
        a[i]=a[n];
        a[n]=x;
    }
    for(int i=0;i<originalN;i++){
        printf("%d\t",a[i]);
    }

    return 0;
}