#include <bits/stdc++.h>
using namespace std;

int main() {
    int k, a, b;
    cin >> k >> a >> b;
    if (a / k != b / k || a % k == 0)
        cout << "OK" << endl;
    else
        cout << "NG" << endl;
}