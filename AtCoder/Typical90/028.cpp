#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	int p[1005][1005];
	for (int i = 0; i < n; i++) {
		int lx, ly, rx, ry;
		cin >> lx >> ly >> rx >> ry;
		p[lx][ly]++;
		p[rx][ry]++;
		p[lx][ry]--;
		p[rx][ly]--;
	}
	for (int i = 0; i < 1003; i++) {
		for (int j = 1; j < 1003; j++) {
			p[i][j] += p[i][j - 1];
		}
	}
	for (int i = 0; i < 1003; i++) {
		for (int j = 1; j < 1003; j++) {
			p[j][i] += p[j - 1][i];
		}
	}
	int ans[100005] = {};
	for (int i = 0; i < 1003; i++)
		for (int j = 0; j < 1003; j++)
			if (p[i][j] != 0) ans[p[i][j]]++;
	for (int i = 0; i < n; i++) cout << ans[i + 1] << endl;
}