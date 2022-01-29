#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int x;
	cin >> x;
	if (x < 40)
		cout << 40 - x << endl;
	else if (x < 70)
		cout << 70 - x << endl;
	else if (x < 90)
		cout << 90 - x << endl;
	else
		cout << "expert" << endl;
}