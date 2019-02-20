#include <stdio.h>

main()
{
    char input;
    float value=0;
    printf("Please enter a mathematical expression: ");
    while ((input = getchar()) != '\n') {
        value=input;
        switch (input) {
            case '+':
                value += (float) input;
                break;
            case '-':
                value -= (float) input;
                break;
            case '*':
                value *= (float) input;
                break;
            case '/':
                value /= (float) input;
                break;
            default:
                value = (float) input;
                break;
        }
    }

    printf("%f\n", value);

    return 0;
}
