#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	int l[15];
	cin >> n;
	for (int i = 0; i < n; i++) cin >> l[i];
	sort(l, l + n);
	int s = 0;
	for (int i = 0; i < n - 1; i++) s += l[i];
	if (s > l[n - 1])
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}