#include <algorithm>
#include <cstdio>
#include <iostream>
using namespace std;

int main() {
	int n, ans = 0, x;
	bool d[100];
	cin >> n;
	for (int i = 0; i < 100; i++) d[i] = false;
	for (int i = 0; i < n; i++) {
		cin >> x;
		d[x - 1] = true;
	}
	for (int i = 0; i < 100; i++) {
		if (d[i]) ans++;
	}
	cout << ans << endl;
}