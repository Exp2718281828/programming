#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	char s[205][205];
	char t[205][205];
	int ms = 0;
	int mt = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++) {
			cin >> s[i][j];
			if (s[i][j] == '#') ms++;
		}
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++) {
			cin >> t[i][j];
			if (t[i][j] == '#') mt++;
		}
	if (ms != mt) {
		cout << "No" << endl;
		return 0;
	}
	char u[205][205];
	for (int h = 0; h < 4; h++) {
		switch (h) {
			case 0:
				for (int i = 0; i < n; i++)
					for (int j = 0; j < n; j++) u[i][j] = t[i][j];
				break;
			case 1:
				for (int i = 0; i < n; i++)
					for (int j = 0; j < n; j++) u[i][j] = t[n - 1 - j][i];
				break;
			case 2:
				for (int i = 0; i < n; i++)
					for (int j = 0; j < n; j++) u[i][j] = t[n - 1 - i][n - 1 - j];
				break;
			default:
				for (int i = 0; i < n; i++)
					for (int j = 0; j < n; j++) u[i][j] = t[j][n - 1 - i];
				break;
		}
		for (int i = -n + 1; i < n; i++) {
			for (int j = -n + 1; j < n; j++) {
				int c = 0;
				for (int k = 0; k < n; k++) {
					for (int l = 0; l < n; l++) {
						if (k + i < 0 || k + i >= n || l + j < 0 || l + j >= n) {
							if (u[k][l] == '#') goto EXIT;
							continue;
						}
						if (s[i + k][j + l] != u[k][l]) goto EXIT;
						if (u[k][l] == '#') c++;
					}
				}
				if (c == ms) {
					cout << "Yes" << endl;
					return 0;
				}
			EXIT:;
			}
		}
	}
	cout << "No" << endl;
}