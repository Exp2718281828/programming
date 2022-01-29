#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	string a, b;
	cin >> a >> b;
	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());
	a += "0000000000000000000";
	b += "0000000000000000000";
	for (int i = 0; i < 19; i++) {
		if ((a[i] - '0') + (b[i] - '0') >= 10) {
			cout << "Hard" << endl;
			return 0;
		}
	}
	cout << "Easy" << endl;
}