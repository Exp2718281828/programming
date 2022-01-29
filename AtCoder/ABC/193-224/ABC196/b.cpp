#include <bits/stdc++.h>
using namespace std;

int main() {
    string x;
    cin >> x;
    for (int i = 0; i < x.length(); i++) {
        if (x[i] != '.') {
            cout << x[i];
        } else {
            break;
        }
    }
    cout << endl;
}