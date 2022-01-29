#include <bits/stdc++.h>
using namespace std;

int main() {
    string s[3];
    for (int i = 0; i < 3; i++) cin >> s[i];
    bool c[26] = {};
    vector<char> top;
    for (int i = 0; i < 3; i++) {
        top.push_back(s[i][0]);
        for (int j = 0; j < s[i].length(); j++) c[s[i][j] - 'a'] = true;
    }
    int n = 0;
    int d[26];
    memset(d, -1, sizeof(d));
    int cnt = 0;
    for (int i = 0; i < 26; i++)
        if (c[i]) {
            n++;
            d[i] = cnt;
            cnt++;
        }
    if (n > 10) {
        cout << "UNSOLVABLE" << endl;
        return 0;
    }
    int x[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    do {
        bool topcheck = true;
        for (int i = 0; i < top.size(); i++) {
            if (x[d[top[i] - 'a']] == 0) topcheck = false;
        }
        if (topcheck) {
            long long int m[3] = {};
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < s[i].length(); j++) {
                    m[i] += x[d[s[i][j] - 'a']] * pow(10, s[i].length() - 1 - j);
                }
            }
            if (m[0] + m[1] == m[2]) {
                for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < s[i].length(); j++) {
                        cout << x[d[s[i][j] - 'a']];
                    }
                    cout << endl;
                }
                return 0;
            }
        }
    } while (next_permutation(x, x + 10));
    cout << "UNSOLVABLE" << endl;
}