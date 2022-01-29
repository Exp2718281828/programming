#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
	bool ans = false;
	cin >> n;
	for (int i = 0; i < n; i++) {
		char c;
		cin >> c;
		if (c == 'Y') ans = true;
	}
	if (ans)
		cout << "Four" << endl;
	else
		cout << "Three" << endl;
}