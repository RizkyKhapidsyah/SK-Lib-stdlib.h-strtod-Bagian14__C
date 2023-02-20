#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*
	Source by AlphaCodingSkills (https://www.alphacodingskills.com)
	Modified For Learn by RK
	I.D.E : VS2022
*/

int main() {
	char str[] = "123 10.55 555.89";
	char* pEnd;

	double val1 = strtod(str, &pEnd);
	double val2 = strtod(pEnd, &pEnd);
	double val3 = strtod(pEnd, &pEnd);

	//menampilkan hasil
	printf("val1 = %.2f\n", val1);
	printf("val2 = %.2f\n", val2);
	printf("val3 = %.2f\n", val3);

	_getch();
	return 0;
}