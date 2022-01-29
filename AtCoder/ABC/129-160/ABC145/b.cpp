#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s;
    bool ans = true;
    cin >> n >> s;
    if (n % 2 == 0) {
        for (int i = 0; i < n / 2; i++) {
            if (s[i] != s[n / 2 + i]) ans = false;
        }
    } else {
        ans = false;
    }
	if (ans)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}