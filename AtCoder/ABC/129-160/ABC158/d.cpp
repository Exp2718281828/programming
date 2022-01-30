#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	string s;
	cin >> s;
	deque<char> c;
	for (int i = 0; i < s.length(); i++) c.push_back(s[i]);
	int q;
	cin >> q;
	int b = 0;
	for (int i = 0; i < q; i++) {
		int t;
		cin >> t;
		if (t == 1)
			b ^= 1;
		else {
			int f;
			char d;
			cin >> f >> d;
			f--;
			if (b ^ f)
				c.push_back(d);
			else
				c.push_front(d);
		}
	}
	if (b) {
		while (!c.empty()) {
			cout << c.back();
			c.pop_back();
		}
	} else {
		while (!c.empty()) {
			cout << c.front();
			c.pop_front();
		}
	}
	cout << endl;
}