#include <stdio.h>

int main(void)
{

	/*
		8. Modify Programming Project 7 so that it prompts for five quiz grades for each of five students, then computes the total score and average score for each student, and the average
		score, high score, and low score for each quiz.
	*/
	int arr[5][5];
	int row_sum[5] = { 0 }, column_sum[5] = { 0 };
	int low_degree[5] = { 100,100,100,100,100 }, high_degree[5] = { 0 };
	int x = 0;
	float avg;

	for (int i = 0; i < 5; i++) {
		printf("Enter student %d degree:", ++x);
		for (int j = 0; j < 5; j++) {
			scanf_s("%d", &arr[i][j]);
		}

	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			row_sum[i] += arr[i][j];
			column_sum[i] += arr[j][i];
			low_degree[i] = ((low_degree[i] > arr[j][i]) ? arr[j][i] : low_degree[i]);
			high_degree[i] = ((high_degree[i] > arr[j][i]) ? high_degree[i] : arr[j][i]);
		}
	}

	x = 0;
	for (int i = 0; i < 5; i++) {
		printf("student %d degree %2d\n", ++x, row_sum[i]);
		avg = row_sum[i] / 5.0f;
		printf("student %d avreage :%.2f\n", x, avg);

	}
	printf("\n");

	x = 0;
	for (int i = 0; i < 5; i++) {
		printf("quiz average in subject %d:%4.2f\n", ++x, column_sum[i] / 5.0f);
		printf("high degree in subject %d : %d\nlow degree in subject %d: %d\n", x, high_degree[i], x, low_degree[i]);
	}
	printf("\n");

	return 0;
}
//10 20 30 40 50
// 20 30 40 50 60
// 50 70 55 42 99
//11 19 99 80 63
// 12 13 58 65 45