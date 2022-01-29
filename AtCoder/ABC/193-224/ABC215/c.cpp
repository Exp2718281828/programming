#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	char c[8];
	string s;
	int k;
	cin >> s >> k;
	int n = s.length();
	for (int i = 0; i < n; i++) c[i] = s[i];
	char sp[8] = {};
	int j = 1;
	sort(c, c + n);
	do {
		if (j == k) {
			for (int i = 0; i < n; i++) cout << c[i];
			cout << endl;
			return 0;
		}
		bool flag = true;
		for (int i = 0; i < n; i++) {
			if (c[i] != sp[i]) flag = false;
		}
		if (!flag) {
			for (int i = 0; i < n; i++) sp[i] = c[i];
			j++;
		}
	} while (next_permutation(c, c + n));
}