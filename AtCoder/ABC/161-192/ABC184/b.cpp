#include <iostream>
using namespace std;

int main() {
    int n, x;
    int point;
    cin >> n >> x;
    point = x;
    for (int i = 0; i < n; i++) {
        char c;
        cin >> c;
        if (c == 'o') {
            point++;
        } else {
            if (point != 0) point--;
        }
    }
    cout << point << endl;
}