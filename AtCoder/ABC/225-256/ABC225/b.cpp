#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	int c[100005] = {};
	for (int i = 0; i < n - 1; i++) {
		int a, b;
		cin >> a >> b;
		c[a - 1]++;
		c[b - 1]++;
	}
	if (*max_element(c, c + n) == n - 1)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}