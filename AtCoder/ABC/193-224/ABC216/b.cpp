#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
	set<string> s;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string a, b;
		cin >> a >> b;
		s.insert(a + ' ' + b);
	}
	if (n == s.size())
		cout << "No" << endl;
	else
		cout << "Yes" << endl;
}