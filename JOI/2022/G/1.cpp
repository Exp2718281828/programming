#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	int a[55];
	for (int i = 0; i < n; i++) cin >> a[i];
	sort(a, a + n);
	int s = 0;
	for (int i = 1; i < n - 1; i++) s += a[i];
	cout << s << endl;
}