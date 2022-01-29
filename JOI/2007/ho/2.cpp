#include <algorithm>
#include <functional>
#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> connect;
	vector<int> secondconnect;
	int n, k;
	bool a[100005];
	cin >> n >> k;
	for (int i = 0; i < 100005; i++) a[i] = false;
	for (int i = 0; i < k; i++) {
		int x;
		cin >> x;
		a[x] = true;
	}
	int stairs = 0;
	for (int i = 1; i <= n; i++) {
		if (a[i]) {
			stairs++;
		} else {
			if (stairs > 0) connect.push_back(stairs);
			stairs = 0;
		}
	}
	if (stairs > 0) connect.push_back(stairs);

	if (a[0]) {
		if (connect.size() == 1) {
			cout << connect[0] + 1 << endl;
		} else {
			for (int i = 0; i < connect.size() - 1; i++) {
				secondconnect.push_back(connect[i] + connect[i + 1] + 1);
			}
			sort(secondconnect.begin(), secondconnect.end(), greater<int>());
			cout << secondconnect[0] << endl;
		}
	} else {
		sort(connect.begin(), connect.end(), greater<int>());
		cout << connect[0] << endl;
	}
}