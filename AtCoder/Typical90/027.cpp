#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
	map<string, bool> d;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		if (d.find(s) == d.end()) cout << i + 1 << endl;
		d[s] = true;
	}
}