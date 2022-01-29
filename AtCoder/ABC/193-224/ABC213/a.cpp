#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int a, b;
	cin >> a >> b;
	for (int i = 0; i < 256; i++) {
		if ((a ^ i) == b) {
			cout << i << endl;
			return 0;
		}
	}
}