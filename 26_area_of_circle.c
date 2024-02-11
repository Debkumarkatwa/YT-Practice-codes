#include<stdio.h>

float calculate_area(float r); 

int main(){
    float redious;
    
    printf("Enter the redious of the circle:: ");
    scanf("%f",&redious);

    float area=calculate_area(redious);
    printf("Area of the circle is = %f",area);

    return 0; 

}
float calculate_area(float r){
    
    float area = ((22*r*r)/7);
    
    return area;

}