#include "logic.h"
double calc_path(int v1, int v2, double s, double t) {
	if (v1 < 0 || v2 < 0 || s < 0 || t < 0) {
		return -1;
	}
	return (v1 + v2) * t + s;
}