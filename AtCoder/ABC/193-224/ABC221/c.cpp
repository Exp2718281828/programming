#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	string s;
	cin >> s;
	vector<int> n;
	for (int i = 0; i < s.length(); i++) {
		n.push_back(s[i] - '0');
	}
	long long int ans = 0;
	sort(n.begin(), n.end());
	do {
		if (n[0] != 0) {
			for (int i = 0; i < s.length() - 1; i++) {
				if (n[i + 1] == 0) continue;
				int a = 0, b = 0;
				for (int j = 0; j < i + 1; j++) {
					a += n[j] * (int)pow(10, i - j);
				}
				for (int j = 0; j < s.length() - i; j++) {
					b += n[j + i + 1] * (int)pow(10, s.length() - i - j - 2);
				}
				ans = max(ans, (long long)a * b);
			}
		}
	} while (next_permutation(n.begin(), n.end()));
	cout << ans << endl;
}