#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	if (b >= a && b <= 6 * a)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}