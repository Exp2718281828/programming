#include <math.h>

#include <iostream>
using namespace std;

bool Isprime(int num) {
    if (num < 2)
        return false;
    else if (num == 2)
        return true;
    else if (num % 2 == 0)
        return false;
    double sqrtNum = sqrt(num);
    for (int i = 3; i <= sqrtNum; i += 2) {
        if (num % i == 0) return false;
    }
    return true;
}

bool Issquare(int num) {
    if (num < 0) return false;
    double x1 = sqrt(num);
    int x2 = sqrt(num);
    double y = x1 - x2;
    if (y <= 0.000000001 && y >= -0.000000001)
        return true;
    else
        return false;
}

int main() {
    int k = 0, p = 1;
    while (k <= 50) {
        p++;
        if (!Isprime(p)) continue;
        for (int q = 2; q <= 5000; q++) {
            int x = p + q, y = p - q;
            if (p == q) continue;
            if ((2 * x) % y != 0) continue;
            if (Issquare(2 * x / y + y)) {
                k++;
                cout << "(" << p << ", " << q << ")" << endl;
            }
        }
        if (p >= 1000000) {
            cout << "exit." << endl;
            break;
        }
    }
}