#include <bits/stdc++.h>
using namespace std;

int main() {
	int h, w;
	char c[55][55];
	int dx[8] = {0, 1, 1, 1, 0, -1, -1, -1};
	int dy[8] = {1, 1, 0, -1, -1, -1, 0, 1};
	for (int i = 0; i < 55; i++) {
		for (int j = 0; j < 55; j++) c[i][j] = '.';
	}
	cin >> h >> w;
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) cin >> c[i + 1][j + 1];
	}
	for (int i = 1; i <= h; i++) {
		for (int j = 1; j <= w; j++) {
			int cnt = 0;
			for (int k = 0; k < 8; k++) {
				if (c[i + dx[k]][j + dy[k]] == '#') cnt++;
			}
			c[i][j] == '#' ? cout << '#' : cout << cnt;
		}
		cout << endl;
	}
}