#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	if (n < 1200)
		cout << "ABC" << endl;
	else if (n < 2800)
		cout << "ARC" << endl;
	else
		cout << "AGC" << endl;
}