#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	string s;
	cin >> s;
	long long int ans[30] = {};
	stack<long long int> r;
	long long int f = 1;
	long long int m = s.length();
	long long int b = 0;
	for (int i = 0; i < m; i++) {
		if (s[i] >= '0' && s[i] <= '9') {
			b *= 10;
			b += (s[i] - '0');
		} else if (s[i] == '(') {
			f *= b;
			r.push(b);
			b = 0;
		} else if (s[i] == ')') {
			f /= r.top();
			r.pop();
		} else {
			if (b == 0) {
				ans[s[i] - 'a'] += f;
			} else {
				ans[s[i] - 'a'] += f * b;
				b = 0;
			}
		}
	}
	for (int i = 0; i < 26; i++) {
		char c = i + 'a';
		cout << c << ' ' << ans[i] << endl;
	}
}