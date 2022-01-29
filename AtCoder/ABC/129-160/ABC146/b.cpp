#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;
    for (int i = 0; i < s.length(); i++) {
        for (int j = 0; j < n; j++) {
            if (s[i] == 'Z')
                s[i] = 'A';
            else
                s[i]++;
        }
    }
    cout << s << endl;
}