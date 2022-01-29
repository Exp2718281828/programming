#include <bits/stdc++.h>
using namespace std;

long long int gcd(long long int x, long long int y) {
	if (x % y == 0) {
		return y;
	} else {
		return gcd(y, x % y);
	}
}

int main(){
    int n;
    cin >> n;
    int g;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if (i == 0) g = a;
        g = gcd(g, a);
    }
    cout << g << endl;
}