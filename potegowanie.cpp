#include <iostream>
#include <math.h>
using namespace std;

int power_singles(int a, int b) {
    int tmp = a % 10;
    int mod[4];

    for (int i=0; i < 4; i++) {
        mod[i] = tmp % 10;
        tmp *= a % 10;
    }
    return mod[(b - 1) % 4];
}

int main() {

    int s, a, b;
    cin >> s;
    for (int i = 0; i < s; i++) {
        cin >> a;
        cin >> b;
        cout << power_singles(a,b) << endl;
    }
    return 0;
}
