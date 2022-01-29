#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    vector<int> ans;
    if (a == b) {
        for (int i = 0; i < a; i++) {
            ans.push_back(i + 1);
            ans.push_back(-(i + 1));
        }
    } else if (a > b) {
        for (int i = 0; i < a; i++) ans.push_back(i + 1);
        for (int i = 0; i < b - 1; i++) ans.push_back(-(i + 1));
        ans.push_back((b - 1) * b / 2 - a * (a + 1) / 2);
    } else {
        for (int i = 0; i < b; i++) ans.push_back(-(i + 1));
        for (int i = 0; i < a - 1; i++) ans.push_back(i + 1);
        ans.push_back(b * (b + 1) / 2 - (a - 1) * a / 2);
    }
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i];
        if (i < ans.size() - 1)
            cout << ' ';
        else
            cout << endl;
    }
}