#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    vector<string> s;
    int m = 0;
    int k = 0;
    map<string, int> a = {};
    cin >> n;
    for (int i = 0; i < n; i++) {
        string t;
        cin >> t;
        a[t]++;
        if (a[t] > m) {
            s.clear();
            s.push_back(t);
            m++;
        } else if (a[t] == m) {
            s.push_back(t);
        }
    }
    sort(s.begin(), s.end());
    for (int i = 0; i < s.size(); i++) cout << s[i] << endl;
}