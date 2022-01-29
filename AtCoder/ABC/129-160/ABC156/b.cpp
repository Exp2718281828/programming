#include <bits/stdc++.h>
using namespace std;

int digitnum(long long int n, int d = 10) {
	assert(d > 1);
	int ans = 0;
	while (1) {
		n /= d;
		ans++;
		if (n == 0) return ans;
	}
}

int main(){
    int n, k;
    cin >> n >> k;
    cout << digitnum(n, k) << endl;
}