#include<stdio.h>

int main(void) {
	/*
	10. Using the switch statement, write a program that converts a numerical
	grade into a letter grade:
	Enter numerical grade: 84
	Letter grade: B
	Use the following grading scale:
	A = 90–100, B = 80–89, C = 70–79,D = 60–69, F = 0–59.
	Print an error message if the grade is larger than 100 or less than 0.
	Hint: Break the grade into two digits, then use a switch statement to test
	the ten’s digit.
	*/

	char letter_grade = 'x';
	int numerical_grade;

	printf("Enter numerical grade: ");
	scanf_s("%d", &numerical_grade);

	if (numerical_grade > 100) {
		printf("the grade is larger than 100\n");
		return 0;
	}
	else if (numerical_grade < 0) {
		printf("the grade is less than 0\n");
		return 0;
	}
	else {
		numerical_grade /= 10;
		switch (numerical_grade) {
		case 10:
		case 9: letter_grade = 'A'; break;
		case 8: letter_grade = 'B'; break;
		case 7: letter_grade = 'C'; break;
		case 6: letter_grade = 'D'; break;
		default:letter_grade = 'F';
		}
		printf("Letter grade: %c", letter_grade);
	}
	return 0;
}