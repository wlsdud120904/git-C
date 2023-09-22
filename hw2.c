#include <stdio.h>

int main(void) {
	float kilometers;
	float miles;

	printf("Please enter kilometers: ");
	scanf_s("%f", &kilometers);

	miles = kilometers / 1.609;

	printf("%.1f km is equal to %.1f miles.", kilometers, miles);

	return 0;
}