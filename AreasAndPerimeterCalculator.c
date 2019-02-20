#include <stdio.h>
#include <conio.h>
#define PI 3.14159265358979323846

float cPerimeter(float x)
{
    //return float
    //two float parameters
    //use different symbols for the parameter
    return PI*x;
}

float cArea (float x)
{
    return PI*x*x;
}

void circle(){
    int choice;
    float base, width, height, answer;
    printf("Circle calculator\n\n");
    printf("Enter 1 to calculate the perimeter, and 2 to calcluate the area");
    scanf("%d", &choice);
    if (choice==1){
    printf("Enter the radius of the circle: ");
    scanf("%f", &base);

        answer=cPerimeter(base); //call a function with 2 arguments
        printf("The perimeter of the circle is %.2f units", answer);

    }
    else {
    printf("Enter the radius");
    scanf("%f", &base);
        answer=cArea(base); //call a function with 2 arguments
        printf("The area of the circle is %.2f units squared", answer);

    }

}


float Pperimeter(float x, float y)
{
    //return float
    //two float parameters
    //use different symbols for the parameter
    return 2*(x+y);
}

float Parea (float x, float y)
{
    return x*y;
}

void Parallelogram(){
    int choice;
    float base, width, height, answer;
    printf("Parallelogram calculator\n\n");
    printf("Enter 1 to calculate the perimeter, and 2 to calcluate the area");
    scanf("%d", &choice);
    if (choice==1){
    printf("Enter base");
    scanf("%f", &base);
    printf("Enter width");
    scanf("%f", &width);

        answer=Pperimeter(base, width); //call a function with 2 arguments
        printf("The perimeter of the parallelogram is %.2f units", answer);

    }

    else {
    printf("Enter base");
    scanf("%f", &base);
    printf("Enter height");
    scanf("%f", &height);
        answer=Parea(base, height); //call a function with 2 arguments
        printf("The area of the parallelogram is %.2f units squared", answer);

    }

    return 0;
}


float Rperimeter(float x, float y)
{
    //return float
    //two float parameters
    //use different symbols for the parameter
    return 2*x+2*y;
}

float Rarea (float x, float y)
{
    return x*y;
}

void Rectangle(){
    int choice;
    float length, width, answer;
    printf("Rectangle calculator\n\n");
    printf("Enter 1 to calculate the perimeter, and 2 to calcluate the area");
    scanf("%d", &choice);
    printf("Enter length: ");
    scanf("%f", &length);
    printf("Enter width: ");
    scanf("%f", &width);
    if (choice==1){

        answer=Rperimeter(length, width); //call a function with 2 arguments
        printf("The perimeter of the rectangle is %.2f units", answer);

    }

    else {
        answer=Rarea(length, width); //call a function with 2 arguments
        printf("The area of the rectangle is %.2f units squared", answer);

    }

    return 0;
}



float TRAperimeter(float x, float y, float z, float a)
{
    //return float
    //two float parameters
    //use different symbols for the parameter
    return x+y+z+a;
}

float TRAarea (float x, float y, float z)
{
    return (float)((x+y)*z)/2;
}

void Trapezoid(){
    int choice;
    float base, width, height, answer, s4;
    printf("Trapezoid calculator\n\n");
    printf("Enter 1 to calculate the perimeter, and 2 to calcluate the area");
    scanf("%d", &choice);
    if (choice==1){
    printf("Enter side length 1: ");
    scanf("%f", &base);
    printf("Enter side length 2: ");
    scanf("%f", &width);
    printf("Enter side length 3: ");
    scanf("%f", &height);
    printf("Enter side length 4: ");
    scanf("%f", &s4);
        answer=TRAperimeter(base, width, height, s4); //call a function with 2 arguments
        printf("The perimeter of the trapezoid is %.2f units", answer);

    }

    else {
    printf("Enter base 1: ");
    scanf("%f", &base);
    printf("Enter base 2: ");
    scanf("%f", &width);
    printf("Enter height: ");
    scanf("%f", &height);
        answer=TRAarea(base, width, height); //call a function with 2 arguments
        printf("The area of the trapezoid is %.2f units squared", answer);

    }

    return 0;
}

float TRIperimeter(float x, float y, float z)
{
    //return float
    //two float parameters
    //use different symbols for the parameter
    return x+y+z;
}

float TRIarea (float x, float y)
{
    return (float)(x*y)/2;
}

void Triangle(){
    int choice;
    float base, width, height, answer;
    printf("triangle calculator\n\n");
    printf("Enter 1 to calculate the perimeter, and 2 to calcluate the area");
    scanf("%d", &choice);
    if (choice==1){
    printf("Enter side length 1: ");
    scanf("%f", &base);
    printf("Enter side length 2: ");
    scanf("%f", &width);
    printf("Enter side length 3: ");
    scanf("%f", &height);
        answer=TRIperimeter(base, width, height); //call a function with 2 arguments
        printf("The perimeter of the triangle is %.2f units", answer);

    }

    else {
    printf("Enter base: ");
    scanf("%f", &base);
    printf("Enter height: ");
    scanf("%f", &height);
        answer=TRIarea(base, height); //call a function with 2 arguments
        printf("The area of the triangle is %.2f units squared", answer);

    }

    return 0;
}









main(){

    char userInput;

    printf("Hello. This program will calculate either the perimeter, or area of a specific shape.\n");
    printf("Here is a list of shapes to choose from:\n");
    printf("1. Circle\n");
    printf("2. Parallelogram\n");
    printf("3. Rectangle\n");
    printf("4. Trapezoid\n");
    printf("5. Triangle\n\n");

    scanf("%c", &userInput);

    switch (userInput){

        case '1':
            circle();
            break;
        case '2':
            Parallelogram();
            break;
        case '3':
            Rectangle();
            break;
        case '4':
            Trapezoid();
            break;
        case '5':
            Triangle();
            break;
        default:
            putchar(userInput);

    }

    return 0;
}
