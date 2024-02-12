#include<stdio.h>
#include<math.h>

int Decimal_converter(int a);

int main(){

    int binary_num,z;

    printf("Enter the number in BINARY form:: ");
    scanf("%d",&binary_num);
       
    printf("\nThe DECIMAl from of the number is :: '%d'", Decimal_converter(binary_num));

}

int Decimal_converter(int a){
    int c=a,d=0,result=0;

	while(c!=0){
		int reminder=c%10;
		result+=(reminder*(pow(2,d)));
		c/=10;
        d++;
	}

    return result;
}