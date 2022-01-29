#include <iostream>
using namespace std;

int main() {
    int h, w, s = 0, m = 105;
    cin >> h >> w;
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            int a;
            cin >> a;
            s += a;
            if (m > a) m = a;
        }
    }
    cout << s - m * h * w << endl;
}