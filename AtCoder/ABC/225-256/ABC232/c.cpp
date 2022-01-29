#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n, m;
	bool p[10][10] = {}, q[10][10] = {};
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		a--, b--;
		p[a][b] = p[b][a] = true;
	}
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		a--, b--;
		q[a][b] = q[b][a] = true;
	}
	vector<int> ord;
	for (int i = 0; i < n; i++) ord.push_back(i);
	do {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (p[i][j] ^ q[ord[i]][ord[j]]) {
					goto EXIT;
				}
			}
		}
		cout << "Yes" << endl;
		return 0;
	EXIT:;
	} while (next_permutation(ord.begin(), ord.end()));
	cout << "No" << endl;
}