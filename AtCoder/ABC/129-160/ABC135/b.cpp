#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int c = 0;
    for (int i = 0; i < n; i++) {
        int p;
        cin >> p;
        if (p != i + 1) c++;
    }
    if (c <= 2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}