#include <iostream>
#include <cstring>
using namespace std;

string convert(string input) {
	input += ' ';
	char last = input.at(0);
	int counter = 1;
	string output = "";
	for (int i = 1; i < input.length(); i++) {
		last = input.at(i - 1);
		if (input.at(i) == last) { counter++; }
		else { 
			output += last; 
			if (counter == 2) output += last;
			if (counter > 2) output += to_string(counter);
			counter = 1;
		}
	}
	return output;
}

int main() {
	int s;
	string input;
	cin >> s;
	for(int i=0;i<s;i++) {
		cin >> input;
		cout << convert(input) << endl;
	}
	return 0;
}