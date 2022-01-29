#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	int t[105];
	cin >> n;
	for (int i = 0; i < n; i++) cin >> t[i];
	int m;
	cin >> m;
	for (int i = 0; i < m; i++) {
		int p, x;
		cin >> p >> x;
		int s = 0;
		for (int j = 0; j < n; j++) {
			s += (j == p - 1 ? x : t[j]);
		}
		cout << s << endl;
	}
}