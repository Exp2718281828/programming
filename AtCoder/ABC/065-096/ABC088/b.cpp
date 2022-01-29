#include <algorithm>
#include <cstdio>
#include <iostream>
using namespace std;

int main() {
	int n, a[100], alice = 0, bob = 0, ans;
	cin >> n;
	for (int i = 0; i < n; i++) cin >> a[i];
	sort(a, a + n, greater<>());
	for (int i = 0; i < n; i++) {
		if (i % 2 == 0) {
			alice += a[i];
		} else {
			bob += a[i];
		}
	}
	ans = alice - bob;
	cout << ans << endl;
}