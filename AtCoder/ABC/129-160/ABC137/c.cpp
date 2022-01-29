#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    map<string, long long int> a;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        a[s]++;
    }
    long long int ans = 0;
    for (auto x : a) {
        ans += x.second * (x.second - 1) / 2;
    }
    cout << ans << endl;
}