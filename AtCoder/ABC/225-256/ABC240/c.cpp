#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n, x;
	cin >> n >> x;
	bool dp[105][10105] = {};
	dp[0][0] = true;
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		for (int j = 0; j < x; j++) {
			if (dp[i][j]) dp[i + 1][j + a] = dp[i + 1][j + b] = true;
		}
	}
	if (dp[n][x])
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}