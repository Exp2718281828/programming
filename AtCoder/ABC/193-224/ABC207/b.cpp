#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int a, b, c, d;
	cin >> a >> b >> c >> d;
	if (c * d - b > 0) {
		cout << (a + c * d - b - 1) / (c * d - b) << endl;
	} else {
		cout << -1 << endl;
	}
}
