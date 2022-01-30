#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	long long int n;
	cin >> n;
	if (n >= -(1LL << 31) && n < (1LL << 31))
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}