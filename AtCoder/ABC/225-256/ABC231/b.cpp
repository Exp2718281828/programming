#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
	map<string, int> d;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		d[s]++;
	}
	int m = 0;
	string ans;
	for (auto itr = d.begin(); itr != d.end(); itr++) {
		if (m < itr->second) {
			m = itr->second;
			ans = itr->first;
		}
	}
	cout << ans << endl;
}