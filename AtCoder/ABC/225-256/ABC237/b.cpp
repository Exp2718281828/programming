#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int h, w;
	cin >> h >> w;
	vector<vector<int>> a;
	a.resize(h);
	for (int i = 0; i < h; i++) a[i].resize(w);
	for (int i = 0; i < h; i++)
		for (int j = 0; j < w; j++) cin >> a[i][j];
	for (int i = 0; i < w; i++)
		for (int j = 0; j < h; j++) {
			cout << a[j][i];
			if (j == h - 1)
				cout << endl;
			else
				cout << ' ';
		}
}