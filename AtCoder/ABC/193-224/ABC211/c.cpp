#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int main() {
	string s;
	cin >> s;
	string l = "chokudai";
	long long int ans = 0;
	long long int p[8] = {};
	for (int i = 0; i < s.length(); i++) {
		for (int j = 0; j < 8; j++) {
			if (s[i] == l[j]) {
				if (j != 0) {
					p[j] += p[j - 1];
					p[j] %= MOD;
				} else {
					p[j]++;
					p[j] %= MOD;
				}
			}
		}
	}
	cout << p[7] % MOD << endl;
}