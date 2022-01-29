#include <bits/stdc++.h>
using namespace std;

int main() {
	int x;
	cin >> x;
	for (int a = -1000; a < 1000; a++) {
		for (int b = -1000; b < 1000; b++) {
			if (pow(a, 5) - pow(b, 5) == x) {
				cout << a << ' ' << b << endl;
				return 0;
			}
		}
	}
}
