// C Program to compute area of circle 

#include <stdio.h>

void main(){
    float radius, area;
    printf("enter the radius of the circle: ");
    scanf("%f",&radius);
    area = 3.14*radius*radius;
    printf("area of the circle is: %f", area);
}