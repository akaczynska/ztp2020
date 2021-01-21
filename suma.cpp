#include <iostream>

using namespace std;

int main() {
    int a, suma = 0, counter = 10;

    while(counter != 0) {
        cin >> a;
        suma += a;
        cout << suma << endl;
        counter--;
    }
return 0;
}
