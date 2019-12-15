#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

/*
 * If A = 0 && B != 0 && C != 0, we solve bx + c = 0,
 * if B = 0 && A != 0 && C != 0, we solve ax^2 + c = 0,
 * if C = 0 && A != 0 && B != 0, we solve ax^2 + bx = 0,
 * if A = B = 0, we have no result,
 * if A = C = 0 or B = C = 0, the result is 0,
 * If discriminant > 0, we have 2 results:
 * x1 = (-b - sqrt(discr)) / (2 * a);
 * x2 = (-b + sqrt(discr)) / (2 * a);
 * if discriminant  = 0, the result is x1 = -b / 2a,
 * if discriminant < 0, we have no result.
 * */

int main() {
	double a, b, c;
	cin >> a >> b >> c;
	double x1, x2, temp;
	vector<double> results;

	if (a == 0 && b && c) {
		x1 = -c / b;
		results.push_back(x1);
	} else if (b == 0 && a && c) {
		temp = -c / a;
		if (temp > 0) {
			x1 = -sqrt(temp);
			x2 = sqrt(temp);
			results.push_back(x1);
			results.push_back(x2);
		}
	} else if (c == 0 && a && b) {
		x1 = 0;
		x2 = -b / a;
		results.push_back(x1);
		results.push_back(x2);
	} else if (a == 0 && c == 0 && b) {
		results.push_back(0);
	} else if (b == 0 && c == 0 && a) {
		results.push_back(0);
	} else if (a && b && c) {
		double discr = b * b - 4 * a * c;
		if (discr > 0) {
			x1 = (-b - sqrt(discr)) / (2 * a);
			x2 = (-b + sqrt(discr)) / (2 * a);
			results.push_back(x1);
			results.push_back(x2);
		}
		if (discr == 0) {
			x1 = -b / (2 * a);
			results.push_back(x1);
		}
	}

	if (results.size()) {
		for (auto num : results) {
			cout << num << ' ';
		}
	}

	return 0;
}
