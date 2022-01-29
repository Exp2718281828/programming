#include <bits/stdc++.h>
using namespace std;

const int INF = 100000000;

int main() {
    string s;
    cin >> s;
    int ans = INF;
    for (int i = 0; i < s.length() - 2; i++) {
        string t;
        t += s[i];
        t = t + s[i + 1] + s[i + 2];
        int u = stoi(t);
        ans = min(ans, abs(u - 753));
    }
    cout << ans << endl;
}