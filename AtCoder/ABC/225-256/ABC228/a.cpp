#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int s, t, x;
	cin >> s >> t >> x;
	if (s > t) t += 24;
	if (s > x) x += 24;
	if (s <= x && x < t)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}