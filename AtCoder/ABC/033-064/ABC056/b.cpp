#include <bits/stdc++.h>
using namespace std;

int main() {
    int w, a, b;
    cin >> w >> a >> b;
    cout << max(0, abs(a - b) - w) << endl;
}