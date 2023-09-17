#include<iostream>

using namespace std;

int main() {
	int a, b;
	cin >> a >> b;

	int c = a, d = b;
	int a2 = 0, a3 = 0, a5 = 0;
	int b2 = 0, b3 = 0, b5 = 0;
	while (1) {
		if (c % 2 == 0) { c = c / 2; a2++; }
		else if (c % 3 == 0) { c = c / 3; a3++; }
		else if (c % 5 == 0) { c = c / 5; a5++; }
		else break;	
	}
	while (1) {
		if (d % 2 == 0) { d = d / 2; b2++; }
		else if (d % 3 == 0) { d = d / 3; b3++; }
		else if (d % 5 == 0) { d = d / 5; b5++; }
		else break;	
	}
	if (c != d) {
		cout << -1;
		return 0;
	}

	cout << abs(a2 - b2) + abs(a3 - b3) + abs(a5 - b5);
}
