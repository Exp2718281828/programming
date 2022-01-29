#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
	map<int, int> m;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		m[a]++;
	}
	vector<int> d;
	for (auto it = m.begin(); it != m.end(); it++) {
		if (it->second >= 2) d.push_back(it->first);
		if (it->second >= 4) d.push_back(it->first);
	}
	if (d.size() >= 2) {
		cout << (long long)d[d.size() - 1] * d[d.size() - 2] << endl;
	} else {
		cout << 0 << endl;
	}
}