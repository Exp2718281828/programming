#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t;
    int a, b;
    string c;
    cin >> s >> t >> a >> b >> c;
    if (s == c)
        cout << a - 1 << " " << b << endl;
    else
        cout << a << " " << b - 1 << endl;
}