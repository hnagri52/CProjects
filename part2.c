#include <stdio.h>
main(){
int array[5][5], row_total[5]={0}, ctotal[5]={0};//declaring all variables
int i, j, k, l, p;
//this for loops assigns all of the value of the inputs to the specific spots in the array
for (i = 0; i < 5; i++) {
		printf("Enter row %d: ", i + 1);
		scanf("%d%d%d%d%d", &array[i][0], &array[i][1], &array[i][2], &array[i][3], &array[i][4]);
	}
	//this loops until it adds all of the column and row numbers together (seperately) to obtain the total value for column and row
	for (j = 0; j < 5; j++) {
		for ( k = 0; k < 5; k++) {
			row_total[j] += array[j][k];
			ctotal[k] += array[j][k];
		}
	}

    printf("Here is a list of the table you created: \n\n");
	for (int i=0; i < 5 ; i++){

        for (int j = 0; j < 5; j++){
            printf("%d ", array[i][j]);
        }

            printf("\n");



	}
    //prints out "row totals: "
	printf("\nRow totals:");
    //this for loop prints out the row totals
	for (l = 0; l < 5; l++) {
		printf(" %d", row_total[l]);
        }
   //prints out "Column totals: "
	printf("\nColumn totals:");
  //this for loop prints out the column totals
	for (p = 0; p < 5; p++) {
		printf(" %d", ctotal[p]);
	}
	return 0;
}
