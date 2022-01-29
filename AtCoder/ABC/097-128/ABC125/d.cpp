#include <bits/stdc++.h>
using namespace std;

const int INF = 1 << 30;

int main() {
    int n;
    vector<int> a, b;
    cin >> n;
    bool zero = false;
    for (int i = 0; i < n; i++) {
        int c;
        cin >> c;
        if (c > 0) {
            a.push_back(c);
        } else if (c < 0) {
            b.push_back(-c);
        } else {
            zero = true;
        }
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    long long int s = 0;
    for (int i = 0; i < a.size(); i++) s += a[i];
    for (int i = 0; i < b.size(); i++) s += b[i];
    a.push_back(INF);
    b.push_back(INF);
    if (zero) {
        cout << s << endl;
    } else {
        if (b.size() % 2 == 1) {
            cout << s << endl;
        } else {
            cout << s - 2 * min(a[0], b[0]) << endl;
        }
    }
}