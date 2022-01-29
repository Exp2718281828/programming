#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int v[30], c[30];
    for (int i = 0; i < n; i++) cin >> v[i];
    for (int i = 0; i < n; i++) cin >> c[i];
    int s = 0;
    for (int i = 0; i < n; i++) s += max(v[i] - c[i], 0);
    cout << s << endl;
}