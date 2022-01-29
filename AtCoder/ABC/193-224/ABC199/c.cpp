#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s;
    int q;
    cin >> n >> s >> q;
    int flipcount = 0;
    for (int i = 0; i < q; i++) {
        int t, a, b;
        cin >> t >> a >> b;
        if (t == 1) {
            a--;
            b--;
            if (flipcount % 2 == 1) {
                if (a < n) {
                    a += n;
                } else {
                    a -= n;
                }
                if (b < n) {
                    b += n;
                } else {
                    b -= n;
                }
            }
            char c;
            c = s[a];
            s[a] = s[b];
            s[b] = c;
        } else {
            flipcount++;
        }
    }
    if (flipcount % 2 == 1) {
        string t;
        t = s.substr(n);
        s.erase(n);
        s.insert(0, t);
    }
    cout << s << endl;
}