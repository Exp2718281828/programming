#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
	string s;
	cin >> n >> s;
	long long int jc = 0;
	vector<long long int> js = {0};
	for (int i = 0; i < n; i++) {
		if (s[i] == 'J') jc++;
		js.push_back(jc);
	}
	long long int ic = 0;
	vector<long long int> is = {0};
	for (int i = 0; i < n; i++) {
		if (s[n - i - 1] == 'I') ic++;
		is.push_back(ic);
	}
	reverse(is.begin(), is.end());
	long long int t = 0;
	long long int m = 0;
	long long int tj = 0, ti = 0;
	for (int i = 0; i < js.size(); i++) {
		if (s[i] == 'O') {
			t += (long long)js[i] * is[i];
			tj += js[i];
			ti += is[i];
		}
		m = max(m, (long long)js[i] * is[i]);
	}
	m = max({m, tj, ti});
	cout << t + m << endl;
}