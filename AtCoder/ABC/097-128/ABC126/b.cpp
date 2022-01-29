#include <bits/stdc++.h>
using namespace std;

bool mb(int x) {
	return (x >= 1 && x <= 12);
}

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int a, b;
	int x;
	cin >> x;
	a = x / 100;
	b = x % 100;
	if (mb(a) && mb(b))
		cout << "AMBIGUOUS" << endl;
	else if (mb(a) && !mb(b))
		cout << "MMYY" << endl;
	else if (!mb(a) && mb(b))
		cout << "YYMM" << endl;
	else
		cout << "NA" << endl;
}