#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;
    t.erase(s.length());
    if (s == t)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}