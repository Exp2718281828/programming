#include <bits/stdc++.h>
using namespace std;

int char2int(char c) {
    assert(c >= '0' && c <= '9');
    return c - '0';
}

int main() {
    int x[10] = {};
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++) {
        x[char2int(s[i])]++;
    }
    bool ans;
    if (s.length() == 1) {
        if (s == "8")
            ans = true;
        else
            ans = false;
    } else if (s.length() == 2) {
        int t;
        t = stoi(s);
        if (t % 8 == 0 || (t / 10 + (t % 10) * 10) % 8 == 0)
            ans = true;
        else
            ans = false;
    } else {
        ans = false;
        for (int i = 0; i < 1000; i += 8) {
            int cnt[10] = {};
            cnt[i / 100]++;
            cnt[(i / 10) % 10]++;
            cnt[i % 10]++;
            for (int j = 0; j < 10; j++) {
                if (cnt[j] > x[j]) goto EXIT;
            }
            ans = true;
        EXIT:
            s = "";
        }
    }
    if (ans)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}