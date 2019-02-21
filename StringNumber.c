#include <stdio.h>
main(){
int one, two, three, four, five, six, seven, eight, nine, zero, x1, x2; //declaring the variables as integers
printf("Please enter a number: "); //printing the following line
scanf("%1d%1d", &x1, &x2); //scanning for the user input and assigning the input to the preceding variables
if (x1==1)//if the first digit starts with a one, do the following
{
if (x1==1 && x2==0){//for each number with the first digit as one, and the second digit as either the same or a different number, print the appropriate name based on the user input
    printf("your number is ten");
}
else if(x1==1 && x2==1){
    printf("Your number is eleven");
}
else if(x1==1 && x2==2){
    printf("Your number is twelve");
}
else if(x1==1 && x2==3){
    printf("Your number is thirteen");
}
else if(x1==1 && x2==4){
    printf("Your number is fourteen");
}
else if(x1==1 && x2==5){
    printf("Your number is fifteen");
}
else if(x1==1 && x2==6){
    printf("Your number is sixteen");
}
else if(x1==1 && x2==7){
    printf("Your number is seventeen");
}
else if(x1==1 && x2==8){
    printf("Your number is eighteen");
}
else if(x1==1 && x2==1){
    printf("Your number is nineteen");
}
}
else if ((x1==2 || x1==3 || x1==4 || x1==5 || x1==6 || x1==7 || x1==8 || x1==9)&& x2==0){//for each number with the second digit as zero, and the first digit as a different number, print the appropriate name based on the user input
    if(x1==2){
    printf("Your number is twenty");
}
else if(x1==3){
    printf("Your number is thirty");
}
else if(x1==4){
    printf("Your number is fourty");
}
else if(x1==5){
    printf("Your number is fifty");
}else if(x1==6){
    printf("Your number is sixty");
}else if(x1==7){
    printf("Your number is seventy");
}else if(x1==8){
    printf("Your number is eighty");
}
else if(x1==9){
    printf("Your number is ninety");
}
}
else if ((x1==2 || x1==3 || x1==4 || x1==5 || x1==6 || x1==7 || x1==8 || x1==9)&& x2==1){//for each number with the second digit as one, and the first digit as the same or a different number, print the appropriate name based on the user input
    if(x1==2){
    printf("Your number is twenty-one");
}
else if(x1==3){
    printf("Your number is thirty-one");
}
else if(x1==4){
    printf("Your number is fourty-one");
}
else if(x1==5){
    printf("Your number is fifty-one");
}else if(x1==6){
    printf("Your number is sixty-one");
}else if(x1==7){
    printf("Your number is seventy-one");
}else if(x1==8){
    printf("Your number is eighty-one");
}
else if(x1==9){
    printf("Your number is ninety-one");
}
}

else if ((x1==2 || x1==3 || x1==4 || x1==5 || x1==6 || x1==7 || x1==8 || x1==9)&& x2==2){ //for each number with the second digit as two, and the first digit as the same or a different number, print the appropriate name based on the user input
    if(x1==2){
    printf("Your number is twenty-two");
}
else if(x1==3){
    printf("Your number is thirty-two");
}
else if(x1==4){
    printf("Your number is fourty-two");
}
else if(x1==5){
    printf("Your number is fifty-two");
}else if(x1==6){
    printf("Your number is sixty-two");
}else if(x1==7){
    printf("Your number is seventy-two");
}else if(x1==8){
    printf("Your number is eighty-two");
}
else if(x1==9){
    printf("Your number is ninety-two");
}
}
else if ((x1==2 || x1==3 || x1==4 || x1==5 || x1==6 || x1==7 || x1==8 || x1==9)&& x2==3){  //for each number with the second digit as three, and the first digit as the same or a different number, print the appropriate name based on the user input
    if(x1==2){
    printf("Your number is twenty-three");
}
else if(x1==3){
    printf("Your number is thirty-three");
}
else if(x1==4){
    printf("Your number is fourty-three");
}
else if(x1==5){
    printf("Your number is fifty-three");
}else if(x1==6){
    printf("Your number is sixty-three");
}else if(x1==7){
    printf("Your number is seventy-three");
}else if(x1==8){
    printf("Your number is eighty-three");
}
else if(x1==9){
    printf("Your number is ninety-three");
}
}
else if ((x1==2 || x1==3 || x1==4 || x1==5 || x1==6 || x1==7 || x1==8 || x1==9)&& x2==4){  //for each number with the second digit as four, and the first digit as the same or a different number, print the appropriate name based on the user input
    if(x1==2){
    printf("Your number is twenty-four");
}
else if(x1==3){
    printf("Your number is thirty-four");
}
else if(x1==4){
    printf("Your number is fourty-four");
}
else if(x1==5){
    printf("Your number is fifty-four");
}else if(x1==6){
    printf("Your number is sixty-four");
}else if(x1==7){
    printf("Your number is seventy-four");
}else if(x1==8){
    printf("Your number is eighty-four");
}
else if(x1==9){
    printf("Your number is ninety-four");
}
}
else if ((x1==2 || x1==3 || x1==4 || x1==5 || x1==6 || x1==7 || x1==8 || x1==9)&& x2==5){  //for each number with the second digit as five, and the first digit as the same or a different number, print the appropriate name based on the user input
    if(x1==2){
    printf("Your number is twenty-five");
}
else if(x1==3){
    printf("Your number is thirty-five");
}
else if(x1==4){
    printf("Your number is fourty-five");
}
else if(x1==5){
    printf("Your number is fifty-five");
}else if(x1==6){
    printf("Your number is sixty-five");
}else if(x1==7){
    printf("Your number is seventy-five");
}else if(x1==8){
    printf("Your number is eighty-five");
}
else if(x1==9){
    printf("Your number is ninety-five");
}
}
else if ((x1==2 || x1==3 || x1==4 || x1==5 || x1==6 || x1==7 || x1==8 || x1==9)&& x2==6){  //for each number with the second digit as six, and the first digit as the same or a different number, print the appropriate name based on the user input
    if(x1==2){
    printf("Your number is twenty-six");
}
else if(x1==3){
    printf("Your number is thirty-six");
}
else if(x1==4){
    printf("Your number is fourty-six");
}
else if(x1==5){
    printf("Your number is fifty-six");
}else if(x1==6){
    printf("Your number is sixty-six");
}else if(x1==7){
    printf("Your number is seventy-six");
}else if(x1==8){
    printf("Your number is eighty-six");
}
else if(x1==9){
    printf("Your number is ninety-six");
}
}
else if ((x1==2 || x1==3 || x1==4 || x1==5 || x1==6 || x1==7 || x1==8 || x1==9)&& x2==7){  //for each number with the second digit as seven, and the first digit as the same or a different number, print the appropriate name based on the user input
    if(x1==2){
    printf("Your number is twenty-seven");
}
else if(x1==3){
    printf("Your number is thirty-seven");
}
else if(x1==4){
    printf("Your number is fourty-seven");
}
else if(x1==5){
    printf("Your number is fifty-seven");
}else if(x1==6){
    printf("Your number is sixty-seven");
}else if(x1==7){
    printf("Your number is seventy-seven");
}else if(x1==8){
    printf("Your number is eighty-seven");
}
else if(x1==9){
    printf("Your number is ninety-seven");
}
}
else if ((x1==2 || x1==3 || x1==4 || x1==5 || x1==6 || x1==7 || x1==8 || x1==9)&& x2==8){  //for each number with the second digit as eight, and the first digit as the same or a different number, print the appropriate name based on the user input
    if(x1==2){
    printf("Your number is twenty-eight");
}
else if(x1==3){
    printf("Your number is thirty-eight");
}
else if(x1==4){
    printf("Your number is fourty-eight");
}
else if(x1==5){
    printf("Your number is fifty-eight");
}else if(x1==6){
    printf("Your number is sixty-eight");
}else if(x1==7){
    printf("Your number is seventy-eight");
}else if(x1==8){
    printf("Your number is eighty-eight");
}
else if(x1==9){
    printf("Your number is ninety-eight");
}
}
else if ((x1==2 || x1==3 || x1==4 || x1==5 || x1==6 || x1==7 || x1==8 || x1==9)&& x2==9){  //for each number with the second digit as nine, and the first digit as the same or a different number, print the appropriate name based on the user input
    if(x1==2){
    printf("Your number is twenty-nine");
}
else if(x1==3){
    printf("Your number is thirty-nine");
}
else if(x1==4){
    printf("Your number is fourty-nine");
}
else if(x1==5){
    printf("Your number is fifty-nine");
}else if(x1==6){
    printf("Your number is sixty-nine");
}else if(x1==7){
    printf("Your number is seventy-nine");
}else if(x1==8){
    printf("Your number is eighty-nine");
}
else if(x1==9){
    printf("Your number is ninety-nine");
}
}
else printf("Please write a two digit number only");//otherwise write a 2 digit number only please
return 0;

}
