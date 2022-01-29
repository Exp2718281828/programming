#include <bits/stdc++.h>
using namespace std;

bool Issquare(long long int num) {
	if (num < 0) return false;
	double x1 = sqrt(num);
	int x2 = sqrt(num);
	double y = x1 - x2;
	if (y <= 0.000000001 && y >= -0.000000001)
		return true;
	else
		return false;
}

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	string a, b;
	cin >> a >> b;
	string c = a + b;
	int x = stoi(c);
	if (Issquare(x))
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}
