#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	long long int s = 0;
	while (n--) {
		int a;
		cin >> a;
		s += a;
	}
	cout << s << endl;
}