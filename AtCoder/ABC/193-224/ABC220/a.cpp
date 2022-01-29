#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int a, b, c;
	cin >> a >> b >> c;
	for (int i = a; i <= b; i++) {
		if (i % c == 0) {
			cout << i << endl;
			return 0;
		}
	}
	cout << -1 << endl;
}