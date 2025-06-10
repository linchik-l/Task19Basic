#include "logic.h"

int main() {
	double x1, y1, x2, y2;

	cout << "Input first coordinates(x1, y1): ";
	cin >> x1 >> y1;

	cout << "Input second coordinates(x2, y2): ";
	cin >> x2 >> y2;

	double lenght = abs(x2 - x1);
	double width = abs(y2 - y1);


	cout << "Area is " << calc_area(lenght, width) << endl;
	cout << "Perimetr is " << calc_perimetr(lenght, width) << endl;

	return 0;
}