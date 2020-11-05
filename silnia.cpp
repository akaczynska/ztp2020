#include <iostream>

using namespace std;

long long int silnia(int n) {
    if (n < 2)
        return 1;

    return n*silnia(n-1);
}

int main() {
    int D, n, dziesiatki, jednosci;
    cin >> D;
    for(int i = 0; i < D; i++) {
        cin >> n;
        if(n < 10) {

        jednosci = silnia(n) % 10;
        dziesiatki = ((silnia(n) - jednosci)/10)%10;
        cout << dziesiatki << " " << jednosci << endl;
        }
        else
            cout << "0 0" << endl;
    }

return 0;
}
