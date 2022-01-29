#include <bits/stdc++.h>
using namespace std;

int main() {
    string n;
    cin >> n;
    while (n[n.length() - 1] == '0') n.erase(n.length() - 1);
    bool ans = true;
    for (int i = 0; i < n.length() / 2; i++) {
        if (n[i] != n[n.length() - 1 - i]) ans = false;
    }
    if (ans)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}