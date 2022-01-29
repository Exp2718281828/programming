#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
	int a[105];
	cin >> n;
	for (int i = 0; i < n; i++) cin >> a[i];
	cout << *max_element(a, a + n) - *min_element(a, a + n) << endl;
}