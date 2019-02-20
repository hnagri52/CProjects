#include <stdio.h>
main(){

int array[5][5]={0};
int i, k, sum1=0, row, n1, n2, n3, sum2=0;

printf("please fill up the array");
for (i=0; i<5; i++){
    for(k=0; k<5; k++){
    scanf ("%d", &array[i][k]);
    }
}

printf("\n\n\n");

printf("Enter 1 to find row, and 2 to find coloum");
scanf("%d", &row);

if (row==1){
    printf("Please enter a row that you want us to find the sum of: ");
    scanf("%d", &n1);
    n1=n1-1;
    for (i=0; i<5; i++){
        sum1= sum1+ array[n1][i];
    }

    printf("%d", sum1);
}

else{
    printf("Please enter a column that you want us to find the sum of: ");
    scanf("%d", &n2);
    n2=n2-1;
    for (i=0; i<5; i++){
        sum2= sum2+ array[i][n2];
    }

    printf("%d", sum2);



}

printf("\n\n\n");

for(i=0; i<5; i++){
  for(k=0; k<5; k++){
    printf("%d", array[i][k]);
  }
printf("\n");
}




return 0;
}
