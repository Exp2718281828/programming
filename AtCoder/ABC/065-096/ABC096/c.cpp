#include <bits/stdc++.h>
using namespace std;

const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int h, w;
	cin >> h >> w;
	char s[55][55];
	for (int i = 0; i < h + 2; i++)
		for (int j = 0; j < w + 2; j++) {
			if (i == 0 || i == h + 1 || j == 0 || j == w + 1)
				s[i][j] = '.';
			else
				cin >> s[i][j];
		}
	for (int i = 1; i <= h; i++) {
		for (int j = 1; j <= w; j++) {
			if (s[i][j] == '.') continue;
			bool a = false;
			for (int k = 0; k < 4; k++) {
				if (s[i + dx[k]][j + dy[k]] == '#') a = true;
			}
			if (!a) {
				cout << "No" << endl;
				return 0;
			}
		}
	}
	cout << "Yes" << endl;
}