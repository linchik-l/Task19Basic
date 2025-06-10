#include "logic.h"

int main() {
	double a, b, c;
	 
	cout << "Input ur values(a, b, c): " ;
	cin >> a >> b >> c;

	if (a <= 0 || b <= 0 || c <= 0) {
		cout << "Error!" << endl;
		return -1;
	}

	cout << "Area is " << calcuate_area(a, b, c) << endl;
	cout << "Volume is " << calcuate_volume(a, b, c) << endl;

	return 0;
}