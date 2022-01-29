#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n, m;
	cin >> n >> m;
	int b[10005][10];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++) cin >> b[i][j];
	bool ans = true;
	if ((b[0][0] - 1) / 7 != (b[0][m - 1] - 1) / 7) ans = false;
	for (int i = 0; i < m - 1; i++) {
		if (b[0][i + 1] != b[0][i] + 1) ans = false;
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n - 1; j++) {
			if (b[j + 1][i] != b[j][i] + 7) ans = false;
		}
	}
	if (ans)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}
