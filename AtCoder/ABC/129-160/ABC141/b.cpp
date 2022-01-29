#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    bool ans = true;
    for (int i = 0; i < s.length(); i++) {
        if (i % 2 == 0 && s[i] == 'L') {
            ans = false;
        } else if (i % 2 == 1 && s[i] == 'R') {
            ans = false;
        }
    }
    if (ans)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}