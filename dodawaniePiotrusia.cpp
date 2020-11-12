#include <iostream>
#include <cstdlib>
#include <sstream>

using namespace std;

string odwroc(string tekst) {
    string wynik;
    for(int i = 0; i < tekst.length(); i++) {
        wynik.insert(0, tekst.substr(i, 1));
    }
    return wynik;
}

string toString(int liczba) {
    string wynik;
    ostringstream ss;
    ss << liczba;
    wynik = ss.str();
    ss.clear();
    ss.str(string());
    return wynik;
}

bool czyPalindrom(string a) {
    for(int i = 0; i < a.length(); i++) {
        if(a.at(i) != a.at(a.length() - 1 - i)) return false;
    }
    return true;
}

int main() {
    int t, n, counter = 0;
    string tmp;
    cin >> t;
    for(int i = 0; i < t; i++) {
        cin >> n;
        while(czyPalindrom(toString(n)) == 0) {
            counter++;
            tmp = odwroc(toString(n));
            n += atoi(tmp.c_str());
        }
        cout << n << " " << counter << endl;
        counter = 0;
    }

return 0;
}
