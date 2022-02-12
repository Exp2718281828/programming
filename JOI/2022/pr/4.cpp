#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n, m;
	string s;
	cin >> n >> m >> s;
	int i = 0;
	vector<int> a;
	int k = 0;
	while (s[i] == 'O' && i < m) i++;
	while (i < m - 2) {
		if (s[i + 1] == 'O' && s[i + 2] == 'I') {
			i += 2;
			k++;
		} else {
			a.push_back(k);
			k = 0;
			i++;
			while (i < m - 2 && s[i] == 'O') i++;
		}
	}
	a.push_back(k);
	long long int ans = 0;
	for (int x : a) {
		if (x >= n) ans += x - n + 1;
	}
	cout << ans << endl;
}