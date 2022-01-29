#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> div(vector<int> x) {
	int n = x.size();
	vector<vector<int>> ans = {{0, n}};
	int s[55] = {};
	for (int i = 0; i < n; i++) s[i + 1] = s[i] + x[i];
	for (int i = 1; i < n; i++) {
		vector<int> a = {0, i};
		int t = s[i];
		int u = 0;
		for (int j = i; j < n; j++) {
			u += x[j];
			if (u > t) goto EXIT;
			if (u == t) {
				a.push_back(j + 1);
				u = 0;
			} else if (j == n - 1)
				goto EXIT;
		}
		ans.push_back(a);
	EXIT:;
	}
	return ans;
}

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int h, w;
	cin >> h >> w;
	vector<vector<int>> a(h, vector<int>(w, 0));
	for (int i = 0; i < h; i++)
		for (int j = 0; j < w; j++) cin >> a[i][j];
	vector<int> sx;
	for (int i = 0; i < h; i++) {
		int t = 0;
		for (int j = 0; j < w; j++) t += a[i][j];
		sx.push_back(t);
	}
	vector<int> sy;
	for (int i = 0; i < w; i++) {
		int t = 0;
		for (int j = 0; j < h; j++) t += a[j][i];
		sy.push_back(t);
	}
	int z[55][55] = {};
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			z[i + 1][j + 1] = z[i][j + 1] + z[i + 1][j] - z[i][j] + a[i][j];
		}
	}
	vector<vector<int>> dx = div(sx);
	vector<vector<int>> dy = div(sy);
	int ans = -1;
	for (vector<int> x : dx) {
		for (vector<int> y : dy) {
			int k = z[x[1]][y[1]];
			for (int i = 0; i < x.size() - 1; i++) {
				for (int j = 0; j < y.size() - 1; j++) {
					if (z[x[i + 1]][y[j + 1]] - z[x[i]][y[j + 1]] - z[x[i + 1]][y[j]] + z[x[i]][y[j]] != k) goto EXIT2;
				}
			}
			ans++;
		EXIT2:;
		}
	}
	cout << ans << endl;
}