#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    set<string> s;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string a;
        cin >> a;
        s.insert(a);
    }
    cout << s.size() << endl;
}