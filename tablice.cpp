#include <iostream>

using namespace std;

int main() {
    int t, n;
    cin >> t;

    for(int i = 0; i < t; i++) {
        cin >> n;
        int tab[n];

        for(int j = 0; j < n; j++) {
            cin >> tab[j];
        }

        for(int k = n - 1; k >= 0; k--) {
            cout << tab[k] << " ";
        }
        cout << endl;
    }

return 0;
}
