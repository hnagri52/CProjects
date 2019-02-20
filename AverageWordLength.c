#include <stdio.h>
main(){
    char ch; //declaring variables
    int wordcount=1, length=0;//declaring variables
    float average;//declaring variables
    printf("This program will allow you to enter a paragraph, and it will determine the average word length based on your input\n\n Please enter a paragraph to count average word length:"); //asking user for their input

    while ((ch=getchar())!='\n'){ //will run until the user presses enter
        if (ch==' '){ //if the input has a space, the word count will increase
            wordcount++;
        }
        else //otherwise, keep increasing the length unless it's a space
            length++;
    }
    average= (float)length/wordcount; //this does the average word length calculation
    printf("The average length is %f characters", average); //this prints the average word length
    return 0;
}
