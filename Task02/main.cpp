#include "logic.h"


int main() {
	double a, b;
	cout << "Input side of the right triangle(a, b): ";
	cin >> a >> b;

	if (a < 1 || b < 1) {
		cout << "Error!";
		return -1;
	}

	cout << "Area is " << calcuate_area(a, b) << endl;
	cout << "Perimetr is " << calcuate_perimetr(a, b) << endl;
	cout << "Gipotenuza is " << calcuate_gipotenuza(a, b) << endl;

	return 0;
}