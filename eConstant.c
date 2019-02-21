#include <stdio.h>

int main()
{
    int number=0,factorial=1; //declaring variables
    float e=1.0, solver=1.0;
    int i, j;
    printf("This program will approximate the mathematical constant of e\n\n\n\n"); //stating what program does
    printf("Please enter a number: "); //asking for input
    scanf("%d", &number); //assigning input to variable

    for (i  = 1; i <= number; i++) { //loops until the user number
        for (  j = 1; j <= i; j++) { //loops until j passes i
            factorial *= j; // the factorial multiplies itself with the j counter
        }
        solver = 1.0/factorial; //solver becomes 1 divided by the factorial value
        e += solver; //adds the solver value to e
        factorial =1; //makes factorial equal 1 again

    }
    printf("%f",e); //prints the value of the mathematical constant e


    return 0;
}
