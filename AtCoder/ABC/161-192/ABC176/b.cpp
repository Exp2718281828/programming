#include <bits/stdc++.h>
using namespace std;

int char2int(char c) {
    assert(c >= '0' && c <= '9');
    return c - '0';
}

int main() {
    int s;
    string n;
    cin >> n;
    for (int i = 0; i < n.length(); i++) {
        s += char2int(n[i]);
    }
    if (s % 9 == 0)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}