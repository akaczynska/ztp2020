#include <iostream>

using namespace std;

int main() {

    int t, n;
    cin >> t;
    for(int i = 0; i < t; i++) {
        cin >> n;
        int tab[n], suma = 0;
        for(int j = 0; j < n; j++) {
            cin >> tab[j];
            suma += tab[j];
        }
        cout << suma << endl;
    }

return 0;
}
