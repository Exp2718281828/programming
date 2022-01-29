#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	long long int n;
	string s;
	long long int ans = 0;
	cin >> n >> s;
	ans = n * (n - 1) / 2 + n;
	long long int l = 1;
	char last = s[0];
	s += 'z';
	for (int i = 1; i <= n; i++) {
		if (last == s[i]) {
			l++;
		} else {
			last = s[i];
			ans -= l * (l - 1) / 2 + l;
			l = 1;
		}
	}
	cout << ans << endl;
}