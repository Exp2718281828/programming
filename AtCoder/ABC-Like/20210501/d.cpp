#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    char c[1000500] = {};
    int rcheck = 1;
    const int center = 500020;
    int l = center;
    int r = center - 1;
    cin >> s;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'R') {
            rcheck *= -1;
        } else {
            if (rcheck == 1) {
                r++;
                c[r] = s[i];
                if (c[r] == c[r - 1]) {
                    c[r] = '0';
                    c[r - 1] = '0';
                    r -= 2;
                }
            } else {
                l--;
                c[l] = s[i];
                if (c[l] == c[l + 1]) {
                    c[l] = '0';
                    c[l + 1] = '0';
                    l += 2;
                }
            }
        }
    }
    if (rcheck == 1) {
        for (int i = l; i <= r; i++) cout << c[i];
    } else {
        for (int i = r; i >= l; i--) cout << c[i];
    }
    cout << endl;
}