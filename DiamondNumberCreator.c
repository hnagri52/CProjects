#include<stdio.h>

    int main(void){
        int i,j,k,l;
        int number=0;
        printf("This program will create a diamond form, which can display numbers in increasing and decreasing order\n\n\nPlease enter up until how many digits you want the diamond to go up until: ");
        scanf("%d", &number);

        for(i=0;i<number;i++){// creates the triangle form
            for(j=0;j<(number-i-1);j++)//adjusts the spaces
                printf(" ");
            for(k=0;k<=i;k++)//prints the first half in increasing order
                printf("%d",(k+1));
            for(l=i;l>0;l--)//prints the secound half of the number in decreasing order
                printf("%d",l);
            printf("\n"); //next line
        }
        for(i=(number-2);i>=0;i--){//this prints an upside-down Triangle. Does almost the same thing as above, just reverses it.
            for(j=(number-1);j>i;j--)
                printf(" ");
            for(k=0;k<=i;k++)
                printf("%d",(k+1));
            for(l=i;l>0;l--)
                printf("%d",l);
            printf("\n");
        }
    return 0;
}
