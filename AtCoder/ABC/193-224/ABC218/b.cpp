#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	for (int i = 0; i < 26; i++) {
		int n;
		cin >> n;
		char c = 'a' + n - 1;
		cout << c;
	}
	cout << endl;
}