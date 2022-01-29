#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a.push_back(x);
    }
    pair<int, int> b[100005];
    for (int i = 0; i < m; i++) cin >> b[i].second >> b[i].first;
    sort(b, b + m);
    reverse(b, b + m);
    for (int j = 0; j < m; j++) {
        for (int k = 0; k < b[j].second; k++) {
            a.push_back(b[j].first);
        }
        if (a.size() >= 2 * n) break;
    }
    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());
    long long int s=0;
    for (int i = 0; i < n; i++) s += a[i];
    cout << s << endl;
}