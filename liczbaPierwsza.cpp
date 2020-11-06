#include <iostream>
using namespace std;

bool isPrime(int n) {
	if (n <= 1)return false;
	if (n % 2 == 0 && n != 2)return false;
	for (int i = 3; i < n; i++) {
		if (n % i == 0)return false;
	}
	return true;
}

int main() {
	int input, s;
	cin >> s;
	for (int i = 0; i < s; i++) {
		cin >> input;
		if (isPrime(input)) { cout << "TAK\n"; }
		else { cout << "NIE\n"; }
	}
	return 0;
}