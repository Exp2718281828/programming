#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	int h[100005];
	cin >> n;
	for (int i = 0; i < n; i++) cin >> h[i];
	bool ans = true;
	for (int i = n - 1; i > 0; i--) {
		if (h[i] + 1 < h[i - 1]) {
			ans = false;
		} else if (h[i] + 1 == h[i - 1]) {
			h[i - 1]--;
		}
	}
	if (ans)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}