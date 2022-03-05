#include <bits/stdc++.h>
using namespace std;

int main() {
	int s;
	cin >> s;
	bool c[1000005] = {};
	c[s] = true;
	for (int i = 2;; i++) {
		if (s % 2 == 0) {
			s /= 2;
		} else {
			s *= 3;
			s += 1;
		}
		if (c[s]) {
			cout << i << endl;
			return 0;
		}
		c[s] = true;
	}
}