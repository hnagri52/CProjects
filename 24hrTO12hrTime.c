#include <stdio.h>
main(){
int num1,num2;
printf("Please enter a 24-hour time: ");
scanf("%2d:%02d", &num1, &num2);

if (num1==24){
    printf("The equivalent 12 hour time is: 12:%02d AM", num2);}
else if (num1==1){
    printf("The equivalent 12 hour time is: 1:%02d AM", num2);}
else if (num1==2){
    printf("The equivalent 12 hour time is: 2:%02d AM", num2);}
else if (num1==3){
    printf("The equivalent 12 hour time is: 3:%02d AM", num2);}
else if (num1==4){
    printf("The equivalent 12 hour time is: 4:%02d AM", num2);}
else if (num1==5){
    printf("The equivalent 12 hour time is: 5:%02d AM", num2);}
else if (num1==6){
    printf("The equivalent 12 hour time is: 6:%02d AM", num2);}
else if (num1==7){
    printf("The equivalent 12 hour time is: 7:%02d AM", num2);}
else if (num1==8){
    printf("The equivalent 12 hour time is: 8:%02d AM", num2);}
else if (num1==9){
    printf("The equivalent 12 hour time is: 9:%02d AM", num2);}
else if (num1==10){
    printf("The equivalent 12 hour time is: 10:%02d AM", num2);}
else if (num1==11){
    printf("The equivalent 12 hour time is: 11:%02d AM", num2);}
else if (num1==12){
    printf("The equivalent 12 hour time is: 12:%02d PM", num2);}
else if (num1==13){
    printf("The equivalent 12 hour time is: 1:%02d PM", num2);}
else if (num1==14){
    printf("The equivalent 12 hour time is: 2:%02d PM", num2);}
else if (num1==15){
    printf("The equivalent 12 hour time is: 3:%02d PM", num2);}
else if (num1==16){
    printf("The equivalent 12 hour time is: 4:%02d PM", num2);}
else if (num1==17){
    printf("The equivalent 12 hour time is: 5:%02d PM", num2);}
else if (num1==18){
    printf("The equivalent 12 hour time is: 6:%02d PM", num2);}
else if (num1==20){
    printf("The equivalent 12 hour time is: 8:%02d PM", num2);}
else if (num1==21){
    printf("The equivalent 12 hour time is: 9:%02d PM", num2);}
else if (num1==22){
    printf("The equivalent 12 hour time is: 10:%02d PM", num2);}
else if (num1==23){
    printf("The equivalent 12 hour time is: 11:%02d PM", num2);}
else if (num1==24){
    printf("The equivalent 12 hour time is: 12:%02d AM", num2);}
else printf("Please re-enter a number");
return 0;
}
