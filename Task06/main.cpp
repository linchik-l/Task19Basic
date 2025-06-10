#include "logic.h"

int main() {
	int v1, v2;
	double s;
	double t;

	cout << "Input speed of drivers: ";
	cin >> v1 >> v2;

	cout << "Input the start path: ";
	cin >> s;

	cout << "Input time: ";
	cin >> t;

	double path = calc_path(v1, v2, s, t);

	string msg = path == -1 ? "Error" : "Result pass is " + to_string(path) + ".";

	cout << msg << endl;


	return 0;
}