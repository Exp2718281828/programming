#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
	long long int a[87];
	cin >> n;
	a[0] = 2;
	a[1] = 1;
	for (int i = 2; i <= 86; i++) a[i] = a[i - 1] + a[i - 2];
	cout << a[n] << endl;
}