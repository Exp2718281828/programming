#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	string x, y;
	int n;
	string s_before[50005];
	pair<string, int> s[50005];
	cin >> y >> n;
	x = "abcdefghijklmnopqrstuvwxyz";
	for (int i = 0; i < 26; i++) {
		x[y[i] - 'a'] = 'a' + i;
	}
	for (int i = 0; i < n; i++) {
		string t;
		cin >> t;
		s_before[i] = t;
		s[i] = make_pair(t, i);
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < s[i].first.length(); j++) {
			s[i].first.at(j) = x[s[i].first.at(j) - 'a'];
		}
	}
	sort(s, s + n);
	for (int i = 0; i < n; i++) {
		cout << s_before[s[i].second] << endl;
	}
}