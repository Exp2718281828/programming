#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int a, b, c;
	cin >> a >> b >> c;
	long long int x, y;
	x = b - a;
	y = c - b;
	if (x > y) {
		cout << x - y << endl;
	} else if (x < y) {
		if ((x - y) % 2 == 0) {
			cout << (y - x) / 2 << endl;
		} else {
			cout << (y - x) / 2 + 2 << endl;
		}
	} else {
		cout << 0 << endl;
	}
}