#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	bool u[2005] = {};
	int x = 1;
	while (1) {
		while (u[x]) x++;
		u[x] = true;
		cout << x << endl;
		int m;
		cin >> m;
		if (m == 0) return 0;
		u[m] = true;
	}
}