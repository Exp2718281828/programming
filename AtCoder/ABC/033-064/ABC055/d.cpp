#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
	vector<int> s;
	cin >> n;
	for (int i = 0; i < n; i++) {
		char c;
		cin >> c;
		s.push_back(c == 'o' ? 0 : 1);
	}
	s.push_back(s[0]);
	s.push_back(s[1]);
	for (int i = 0; i < 4; i++) {
		vector<int> t;
		switch (i) {
			case 0:
				t = {0, 0};
				break;
			case 1:
				t = {0, 1};
				break;
			case 2:
				t = {1, 0};
				break;
			case 3:
				t = {1, 1};
				break;
		}
		for (int j = 0; j < n; j++) {
			t.push_back(t[j] ^ t[j + 1] ^ s[j + 1]);
		}
		if (t[0] == t[n] && t[1] == t[n + 1]) {
			for (int j = 0; j < n; j++) {
				cout << (t[j] ? 'W' : 'S');
			}
			cout << endl;
			return 0;
		}
	}
	cout << -1 << endl;
}