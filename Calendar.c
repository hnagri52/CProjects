#include <stdio.h>

int main() {
	 int days=0, start_day=0, i, j; //initializing the variables
    printf("Enter number of days in month: "); //asking user for input
    scanf("%d", &days);//assigns input to variable
    printf("Enter starting day of the week (1=Sun, 7=Sat): ");//asking user for input
    scanf("%d", &start_day); //assigns input to variable
    printf("\n");//creates a line space
    for (i = 1; i < start_day; i++){//this prints the blank spaces for the first week if needed
        printf("   ");
    }
    for (j = 1; j <= days; i++, j++) {//prints the calendar
        printf("%3d", j);//adds 2 spaces, then prints out the number
        if (i % 7 == 0) //when there are 7 dates, it goes to the next line
            printf("\n");
    }
    printf("\n\n"); //two line spaces, just to be more organized and neat
	return 0;
}
