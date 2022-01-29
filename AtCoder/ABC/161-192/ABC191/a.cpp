#include <bits/stdc++.h>
using namespace std;

int main() {
    int v, t, s, d;
    cin >> v >> t >> s >> d;
    if (v * t > d || v * s < d)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}
