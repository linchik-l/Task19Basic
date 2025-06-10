#include "logic.h"

int main() {
	double r;

	cout << "Input radius: ";
	cin >> r;

	if (r < 1) {
		cout << "Error!";
		return -1;
	}
	
	cout << "Circle radius = " << r << endl;
	cout << "Lenght is " << calc_length(r) << endl;
	cout << "Area is " << calc_area(r) << endl;

	return 0;
}