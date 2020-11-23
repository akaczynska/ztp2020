#include <iostream>
#include <iomanip>
#include <sstream>
#include <cstring>
using namespace std;

union ufloat {
	float f;
	unsigned u;
};


string printfloat(float a) {
	if (a == 0)return "0 0 0 0";
	ufloat n;
	n.f = a;
	stringstream s;
	s << hex << n.u << endl;
	string input, output;
	input = s.str();
	for (int i = 0; i < 8; i++) {
		if (input[i] == '0' && i % 2 == 0) continue;
		output += input[i];
		if (i % 2 == 1)output += ' ';
	}
	return output;
}

int main() {
	int s;
	float a;
	cin >> s;
	for (int i = 0; i < s; i++) {
		cin >> a;
		cout << printfloat(a) << endl;
	}

return 0;
}
