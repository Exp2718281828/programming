#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
	string w[105];
	cin >> n;
	set<string> d;
	for (int i = 0; i < n; i++) cin >> w[i];
	for (int i = 0; i < n - 1; i++) {
		if (w[i][w[i].length() - 1] != w[i + 1][0]) {
			cout << "No" << endl;
			return 0;
		}
	}
	for (int i = 0; i < n; i++) {
		if (d.find(w[i]) != d.end()) {
			cout << "No" << endl;
			return 0;
		}
		d.insert(w[i]);
	}
	cout << "Yes" << endl;
}