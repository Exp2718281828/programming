#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int x;
	cin >> x;
	for (int i = 1; i <= 8; i++) {
		if (x >= 2000 - 200 * i) {
			cout << i << endl;
			return 0;
		}
	}
}