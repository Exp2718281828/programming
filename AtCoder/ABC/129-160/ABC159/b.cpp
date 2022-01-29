#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    bool ans = true;
    cin >> s;
    string u = "";
    for (int i = 0; i < s.length(); i++) u += s[s.length() - i - 1];
    string t = s.substr(0, (s.length() - 1) / 2);
    string v = "";
    for (int i = 0; i < t.length(); i++) v += t[t.length() - i - 1];
    string r = s.substr((s.length() + 1) / 2);
    string w = "";
    for (int i = 0; i < r.length(); i++) w += r[r.length() - i - 1];
    if (s != u) ans = false;
    if (t != v) ans = false;
    if (r != w) ans = false;
    if (ans)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}