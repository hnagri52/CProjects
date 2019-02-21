#include <stdio.h>
main(){
int n1, n2, answer; //declaring the variables as integers
printf("Please enter a time in 24 hour format: "); //printing the preceding phrase
scanf("%02d:%02d", &n1, &n2); //obtaining the input, and assigning them to the variables
answer=n1*60+n2; //to determine the number in minutes, this math is needed. The final answer is assigned to the answer variable, which will be used to determine the appropriate departure time.
if (answer>=1222.5 || answer<172.5){//if the minutes is either over, or less than what is indicated, then print the following statement.
    printf("The closest departure is 9:45 pm, arriving at 11:58 pm");
}
else if (answer>=172.5 && answer<526.5){
    printf("The closest departure time is 8:00 am, arriving at 10:16 am");//if the answer variable is in between these numbers which are the minutes, print the appropriate line.
}
else if (answer>=526.5 && answer<631){
     printf("The closest departure time is 9:43 am, arriving at 11:52 am");//if the answer variable is in between these numbers which are the minutes, print the appropriate line.
}
else if (answer>=631 && answer<723){
     printf("The closest departure time is 11:19 am, arriving at 1:31 pm");//if the answer variable is in between these numbers which are the minutes, print the appropriate line.
}
else if (answer>=723 && answer<803.5){
     printf("The closest departure time is 12:47 pm, arriving at 3:00 pm");//if the answer variable is in between these numbers which are the minutes, print the appropriate line.
}
else if (answer>=803.5 && answer<892.5){
     printf("The closest departure time is 2:00 pm, arriving at 4:08 pm");//if the answer variable is in between these numbers which are the minutes, print the appropriate line.
}
else if (answer>=892.5 && answer<1042.5){
     printf("The closest departure time is 3:45 pm, arriving at 5:55 pm");//if the answer variable is in between these numbers which are the minutes, print the appropriate line.
}
else if (answer>=1042.5 && answer<1222.5){
     printf("The closest departure time is 7:00 pm, arriving at 9:20 pm");//if the answer variable is in between these numbers which are the minutes, print the appropriate line.
}
return 0;
}

