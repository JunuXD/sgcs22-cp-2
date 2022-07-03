#include <stdio.h>

float avgFunc(float, float, float);
void gradeFunc(float);

int main(void)
{
	float p1, p2, p3, avgp;

	printf("Input: ");
	scanf("%f %f %f", &p1, &p2, &p3);

	avgp = avgFunc(p1, p2, p3);

	gradeFunc(avgp);

	return 0;
}

float avgFunc(float p1, float p2, float p3)
{
	float avgres;

	avgres = (p1+p2+p3) / 3;

	return avgres;
}

void gradeFunc(float avg)
{
	char grade;

	if (avg/10 >= 9)
		grade = 'A';
	else{
		if (avg/10 >= 8)
			grade = 'B';
		else{
			if (avg/10 >= 7)
				grade = 'C';
			else{
				if (avg/10 >= 5)
					grade = 'D';
				else
					grade = 'F';
			}
		}
	}

	printf("Grade: %c\n", grade);
}
