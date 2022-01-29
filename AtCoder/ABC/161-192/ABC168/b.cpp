#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    int k;
    cin >> k >> s;
    if (s.length() <= k)
        cout << s << endl;
    else {
        s.erase(k);
        cout << s << "..." << endl;
    }
}