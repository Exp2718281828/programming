#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s, t;
    cin >> s >> t;
    bool ans = true;
    for (int i = 0; i < n; i++) {
        if (t[i] == 'A' && !(s[i] == '0' || s[i] == '7')) ans = false;
    }
    if (ans)
        cout << "Takahashi";
    else
        cout << "Aoki";
}