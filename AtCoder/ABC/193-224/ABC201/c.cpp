#include <bits/stdc++.h>
using namespace std;

int char2int(char c) {
    assert(c >= '0' && c <= '9');
    return c - '0';
}

int main() {
    string s;
    cin >> s;
    int c = 0;
    int ans = 0;
    for (int i = 0; i < 10; i++) {
        if (s[i] == 'o') c += (1 << i);
    }
    for (int i = 0; i < 10000; i++) {
        string n;
        n = to_string(i);
        int l = n.length();
        string a = "";
        for (int j = 0; j < 4 - l; j++) a += '0';
        n = a + n;
        int d = (1 << 10) - 1;
        for (int j = 0; j < 4; j++) {
            if (s[char2int(n[j])] == 'x') goto EXIT;
            d &= ~(1 << (char2int(n[j])));
        }
        if ((c & d) != 0) continue;
        ans++;
    EXIT:
        n = "";
    }
    cout << ans << endl;
}
