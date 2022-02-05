#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	if (n > 10)
		cout << "Yes" << endl;
	else {
		if ((int)pow(2, n) > n * n)
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
}