#include <stdio.h>
main(){
    //declares all of the variables
	int array[5][5];
	int row_totals[5] = {0};
	int col_totals[5] = {0};
	int low_score[5];
	int high_score[5];
	int i, j, k , l , m;
	//obtains all of the inputs, assings them to specific spots in the array.
	for (i = 0; i < 5; i++) {
		printf("Enter quizzes for student %d: ", i + 1);
		scanf("%d%d%d%d%d", &array[i][0], &array[i][1], &array[i][2], &array[i][3], &array[i][4]);
	}
    //this for loop prepares the program for the next for loop. By making each value in the low score and high score array be either a high or low, it will make sure that the first input will automatically become the high and low.
	for (j = 0; j < 5; j++) {
		low_score[j] = 999;
		high_score[j] = -999;
	}
    //these for loops will calcuate the totals of each row and column, as well as the highest and lowest score of each quiz
	for (k = 0; k<5; k++) {
		for (j = 0; j < 5; j++) {
			row_totals[k] += array[k][j];
			col_totals[j] += array[k][j];

			if (array[k][j] < low_score[j]) {
				low_score[j] = array[k][j];
			}
			if (array[k][j] > high_score[j]) {
				high_score[j] = array[k][j];
			}
		}
	}
    //this for loop will determine the total (adds up all of the quizzes for the students), and also determines the averages to the nearest tenth
	for (l= 0; l < 5; l++) {
		printf("\nStudent %d: ", l + 1);
		printf("Total = %d, Avg = %.1f", row_totals[l], (float) row_totals[l] / 5);
	}
	//prints new line
	printf("\n");
    //this for loop determines the averages for the quizzes (for the class), and determines what the highest and lowest marks were
	for (m = 0; m< 5; m++) {
		printf("\nQuiz %d: ", m + 1);
		printf("Avg = %.1f, Low = %d, High = %d",
		       (float) col_totals[m] / 5,
		       low_score[m], high_score[m]);
	}
	return 0;
}
