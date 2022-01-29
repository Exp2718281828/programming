#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int h, w;
	cin >> h >> w;
	char a[105][105];
	bool x[105] = {};
	bool y[105] = {};
	for (int i = 0; i < h; i++)
		for (int j = 0; j < w; j++) cin >> a[i][j];
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			if (a[i][j] == '#') goto EXIT1;
		}
		x[i] = true;
	EXIT1:;
	}
	for (int i = 0; i < w; i++) {
		for (int j = 0; j < h; j++) {
			if (a[j][i] == '#') goto EXIT2;
		}
		y[i] = true;
	EXIT2:;
	}
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			if (!x[i] && !y[j]) cout << a[i][j];
		}
		if (!x[i]) cout << endl;
	}
}