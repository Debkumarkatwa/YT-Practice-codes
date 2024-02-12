#include<stdio.h>

void make_star(int a);

void main(){
   
    int rows;

    printf("Enter the rows of the Triangle:: ");
    scanf("%d",&rows);

    make_star(rows);

}

void make_star(int a){
    int b=1;
    for(int i=1;i<=a*2;i++){
        if(i%2!=0){
            for(int j=b;j<=a;j++){
                printf(" ");	
		    }
		    for(int k=1;k<=i;k++){
		        printf("*");
		    }
		    printf("\n");
            b++;
        }
    }

}