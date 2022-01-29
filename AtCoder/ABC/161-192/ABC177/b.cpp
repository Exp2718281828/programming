#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;
    int ans = 10000;
    for (int i = 0; i < s.length() - t.length() + 1; i++) {
        int m = 0;
        for (int j = 0; j < t.length(); j++) {
            if (s[i + j] != t[j]) m++;
        }
        ans = min(ans, m);
    }
    cout << ans << endl;
}