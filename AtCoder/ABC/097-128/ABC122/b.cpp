#include <bits/stdc++.h>
using namespace std;

bool atcg(char c) {
	return (c == 'A' || c == 'T' || c == 'G' || c == 'C');
}

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	string s;
	cin >> s;
	int c = 0;
	int m = 0;
	for (int i = 0; i < s.length(); i++) {
		if (atcg(s[i])) {
			c++;
		} else {
			m = max(m, c);
			c = 0;
		}
	}
	m = max(m, c);
	cout << m << endl;
}