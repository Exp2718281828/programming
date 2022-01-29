#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;
    for (int i = s.length() - t.length(); i >= 0; i--) {
        bool c = true;
        for (int j = 0; j < t.length(); j++) {
            if (s[i + j] != '?' && s[i + j] != t[j]) {
                c = false;
            }
        }
        if (c) {
            for (int j = 0; j < s.length(); j++) {
                if (j >= i && j < i + t.length())
                    cout << t[j - i];
                else if (s[j] != '?')
                    cout << s[j];
                else
                    cout << 'a';
            }
            cout << endl;
            return 0;
        }
    }
    cout << "UNRESTORABLE" << endl;
}