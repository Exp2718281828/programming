#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int m, n;
	char a[55][55], b[55][55];
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++) cin >> a[i][j];
	for (int i = 0; i < m; i++)
		for (int j = 0; j < m; j++) cin >> b[i][j];
	for (int i = 0; i < n - m + 1; i++) {
		for (int j = 0; j < n - m + 1; j++) {
			for (int k = 0; k < m; k++) {
				for (int l = 0; l < m; l++) {
					if (a[k + i][l + j] != b[k][l]) goto EXIT;
				}
			}
			cout << "Yes" << endl;
			return 0;
		EXIT:;
		}
	}
	cout << "No" << endl;
}