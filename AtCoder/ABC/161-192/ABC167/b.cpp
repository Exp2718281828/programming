#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, k;
    cin >> a >> b >> c >> k;
    int s = 0;
    s += min(a, k);
    k -= min(a, k);
    k -= min(b, k);
    s -= min(c, k);
    cout << s << endl;
}