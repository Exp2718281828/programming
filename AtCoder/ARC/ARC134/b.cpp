#include <bits/stdc++.h>
using namespace std;
int t[30][200005] = {};

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
	string s;
	cin >> n >> s;
	vector<int> k[30];
	for (int i = 0; i < n; i++) {
		k[s[i] - 'a'].push_back(i);
		for (int j = 0; j < 26; j++) {
			if (s[i] == 'a' + j)
				t[j][i + 1] = t[j][i] + 1;
			else
				t[j][i + 1] = t[j][i];
		}
	}
	int l = 0, r = n - 1;
	while (l < r) {
		int c = -1;
		for (int i = 0; i < s[l] - 'a'; i++) {
			if (t[i][r + 1] - t[i][l + 1] > 0) {
				c = k[i][t[i][r + 1] - 1];
				break;
			}
		}
		if (c != -1) {
			swap(s[l], s[c]);
			r = c - 1;
		}
		l++;
	}
	cout << s << endl;
}