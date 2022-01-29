#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, l;
	cin >> n >> l;
	int s = 0;
	int m = 10000;
	int k = 0;
	for (int i = 0; i < n; i++) {
		s += l + i;
		if (abs(l + i) < m) {
			m = abs(l + i);
			k = l + i;
		}
	}
	cout << s - k << endl;
}