#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, w;
    cin >> n >> w;
    long long int t[200005];
    memset(t, 0, sizeof(t));
    for (int i = 0; i < n; i++) {
        int s, u, p;
        cin >> s >> u >> p;
        t[s] += p;
        t[u] -= p;
    }
    for (int i = 0; i < 200001; i++) t[i + 1] += t[i];
    if (*max_element(t, t + 200001) > w)
        cout << "No" << endl;
    else
        cout << "Yes" << endl;
}