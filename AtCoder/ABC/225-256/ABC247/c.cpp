#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	int m = (1 << n) - 1;
	for (int i = 1; i <= m; i++) {
		for (int j = 0;; j++) {
			if (i & (1 << j)) {
				cout << j + 1;
				if (i == m)
					cout << endl;
				else
					cout << ' ';
				break;
			}
		}
	}
}