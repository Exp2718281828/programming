#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s;
    int ans = 0;
    cin >> n >> s;
    for (int i = 0; i < s.length() - 2; i++) {
        if (s[i] == 'A' && s[i + 1] == 'B' && s[i + 2] == 'C') ans++;
    }
    cout << ans << endl;
}