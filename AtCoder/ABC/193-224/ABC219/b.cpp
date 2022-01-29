#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	string s, t, u;
	cin >> s >> t >> u;
	string v;
	cin >> v;
	for (int i = 0; i < v.length(); i++) {
		if (v[i] == '1')
			cout << s;
		else if (v[i] == '2')
			cout << t;
		else
			cout << u;
	}
	cout << endl;
}