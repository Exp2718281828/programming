#include <bits/stdc++.h>
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

int main(){
    int x;
    cin >> x;
	for (int i = x; ; i++){
		if(Isprime(i)){
            cout << i << endl;
            return 0;
        }
    }
}