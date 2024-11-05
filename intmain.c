#include <stdio.h>
#define PI 3.14159


double area(double radius);                
double circumference(double radius);       

int main() {
    double radius, circleArea, circleCircumference;

    
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    
    circleArea = area(radius);
    circleCircumference = circumference(radius);

   
    printf("Area of the circle: %.2lf\n", circleArea);
    printf("Circumference of the circle: %.2lf\n", circleCircumference);

    return 0;
}
