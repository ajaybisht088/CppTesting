#include<stdio.h>
#define Pi 3.14
float areaOfCircle(int);
float circumferenceOfCircle(int);

float areaOfCircle(int r){
    return Pi*r*r;
}

float circumferenceOfCircle(int r){
    return 2*Pi*r;
}

void main(){
    int radius;
    printf("Enter the radius of the Circle : ");
    scanf("%d", &radius);
    printf("\nArea = %f, Circumference = %f", areaOfCircle(radius), circumferenceOfCircle(radius));
}