#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n, k, a;
	cin >> n >> k >> a;
	cout << ((a + k - 1) % n == 0 ? n : (a + k - 1) % n) << endl;
}