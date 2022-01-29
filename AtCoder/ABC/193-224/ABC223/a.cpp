#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int x;
	cin >> x;
	if (x % 100 == 0 && x > 0)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}