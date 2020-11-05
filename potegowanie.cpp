#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int D, a, b;
    cin >> D;
    for (int i = 0; i < D; i++) {
        cin >> a;
        cin >> b;
        cout << (int(pow(a, b)))%10 << endl;
    }
    return 0;
}
