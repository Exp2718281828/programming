#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	string s;
	cin >> s;
	vector<string> m;
	for (int i = 0; i < s.length(); i++) {
		string t = "";
		for (int j = 0; j < s.length(); j++) {
			t += s[(i + j) % s.length()];
		}
		m.push_back(t);
	}
	sort(m.begin(), m.end());
	cout << m[0] << endl << m[s.length() - 1] << endl;
}