#include <iostream>
#include <string>
using namespace std;

int main() {
	string a, b, c;
	string min;

	cin >> a >> b >> c;
	if (a < b) {
		min = a;
	} else {
		min = b;
	}

	if (c < min) {
		min = c;
	}
	cout << min;
	return 0;
}
