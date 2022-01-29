#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, x;
	int s = 0;
	cin >> n >> x;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		s += a;
		if (i % 2 == 1) s -= 1;
	}
	if (s <= x)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}