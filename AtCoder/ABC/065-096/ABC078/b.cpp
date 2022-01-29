#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int x, y, z;
	cin >> x >> y >> z;
	for (int i = 1;; i++) {
		if (z + i * (y + z) > x) {
			cout << i - 1 << endl;
			return 0;
		}
	}
}