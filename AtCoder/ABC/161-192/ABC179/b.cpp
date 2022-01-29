#include <bits/stdc++.h>
using namespace std;

int main() {
    pair<int, int> a[105];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i].first >> a[i].second;
    for (int i = 0; i < n - 2; i++) {
        if (a[i].first == a[i].second && a[i + 1].first == a[i + 1].second && a[i + 2].first == a[i + 2].second) {
            cout << "Yes" << endl;
            return 0;
        }
    }
	cout << "No" << endl;
}