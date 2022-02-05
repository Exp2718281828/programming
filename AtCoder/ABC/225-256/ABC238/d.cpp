#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int t;
	cin >> t;
	while (t--) {
		long long int a, s;
		cin >> a >> s;
		if (a & (s - a) == a)
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
}