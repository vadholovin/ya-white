#include <iostream>
#include <string>
using namespace std;

int main() {
	string a, b, c;
	string min;
	cin >> a >> b >> c;

	min = (a <= b) ? a : b;
	if (c <= min) {
		min = c;
	}

	cout << min;
	return 0;
}
