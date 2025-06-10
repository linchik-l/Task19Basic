#include "logic.h"

int main() {
	double r1, r2;
	cout << "Input two radius: ";
	cin >> r1 >> r2;

	if (r1 < r2 || r1 < 0 || r2 < 0) {
		cout << "Error!";
		return -1;
	}

	double area3 = calc_area1(r1) - calc_area2(r2);
	double area1 = calc_area1(r1);
	double area2 = calc_area2(r2);

	cout << "Area1 is " << area1 << endl;
	cout << "Area2 is " << area2 << endl;
	cout << "Area3 is " << area3 << endl;


	return 0;
}