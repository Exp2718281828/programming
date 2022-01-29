#include <bits/stdc++.h>
using namespace std;

int main() {
    string n;
    cin >> n;
    bool ans;
    if (n[1] != n[2])
        ans = false;
    else if (n[0] == n[1] || n[2] == n[3])
        ans = true;
    if (ans)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}