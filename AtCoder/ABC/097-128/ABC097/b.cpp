#include <bits/stdc++.h>
using namespace std;

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);
	int x;
	cin >> x;
	int ans = 1;
	for (int b = 2; b <= 1000; b++) {
		for (int p = 2;;p++){
			if (pow(b, p) <= x) ans = max(ans, (int)pow(b, p));
			if (pow(b, p) > 1000) break;
		}
	}
	cout << ans << endl;
}