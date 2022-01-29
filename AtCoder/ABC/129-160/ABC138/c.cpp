#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    vector<double> v;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int vt;
        cin >> vt;
        v.push_back(vt);
    }
    for (int i = n - 1; i > 0; i--) {
        sort(v.begin(), v.end(), greater<double>());
        double newv = (v[i] + v[i - 1]) / 2.0;
        v.pop_back();
        v.pop_back();
        v.push_back(newv);
    }
    printf("%.16f\n", v[0]);
}