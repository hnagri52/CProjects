#include <stdio.h>
int main()
{
    int monthInput, dayInput, yearInput, last, first, month,day,year; //declaring all the variables that will be used as integers

    printf("This program will allow you to enter a series of dates, and it will tell you the earliest date. To exit, please enter (00/00/00)\n");//letting the user know what the program will do
    printf("\nPlease enter a date (mm/dd/yy): ");//asking user for input
    scanf("%02d/%02d/%02d",&monthInput, &dayInput, &yearInput);//assigning the inputs to their independant variables.
    last= (monthInput * 30) + dayInput + (yearInput* 365);//determining the value in days
    first=last;//assigning first the same integer as last
    //giving month, day, and year, their own values
    month=monthInput;
    day=dayInput;
    year=yearInput;
    while(last==0){//runs until the user gives a valid input
       printf("Please enter some valid dates before you exit this program with 0/0/0");
       printf("\nEnter a date (mm/dd/yy): ");
       scanf("%02d/%02d/%02d",&monthInput, &dayInput, &yearInput);
       last= (monthInput * 30) + dayInput + (yearInput* 365);
    }
    first=last; //making them equal
    while(last!=0){//runs until the user enters 0/0/0
        if(first>=last){//will run no matter what because we made first=last
            month=monthInput;
            day=dayInput;
            year=yearInput;
            first=last;
        }

        printf("Please enter a date (mm/dd/yy): ");//asks user for input
        scanf("%02d/%02d/%02d",&monthInput, &dayInput, &yearInput);//assigns input to variables
        last= (monthInput * 30) + dayInput + (yearInput* 365);//converts to days
    }

    printf("The earliest date from the data that you have entered is: %d/%d/%d", month, day, year); //print the earliest date
    return 0;
}
