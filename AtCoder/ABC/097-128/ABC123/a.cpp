#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int a, b, c, d, e, k;
	cin >> a >> b >> c >> d >> e >> k;
	if (e - a > k)
		cout << ":(" << endl;
	else
		cout << "Yay!" << endl;
}