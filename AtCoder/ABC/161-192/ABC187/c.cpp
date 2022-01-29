#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
	map<string, pair<bool, bool>> m;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		if (s[0] == '!') {
			s.replace(0, 1, "");
			m[s].first = true;
		} else {
			m[s].second = true;
		}
	}
	for (auto it = m.begin(); it != m.end(); it++) {
		pair<bool, bool> k = it->second;
		if (k.first && k.second) {
			cout << it->first << endl;
			return 0;
		}
	}
	cout << "satisfiable" << endl;
}