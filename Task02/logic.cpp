#include "logic.h"


double calcuate_area(double a, double b) {
	return a * b / 2;
}
double calcuate_gipotenuza(double a, double b) {
	return sqrt(a * a + b * b);
}

double calcuate_perimetr(double a, double b) {
	return calcuate_gipotenuza(a, b) + a + b;
}
