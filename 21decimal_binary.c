#include<stdio.h>
#include<stdbool.h>

int Binary_converter(int a);

int Binary_converter(int a){
    int c=a,d=0,result=0;

	while(c!=0){
		int reminder=c%10;
		result+=(reminder*(pow(2,d)));
		c/=10;
        d++;
	}

    return result;
}