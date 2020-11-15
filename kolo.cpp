#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

const double PI = 3.141592654;

int main() {

    double r, d, S;

    cin >> r >> d;
    double srednica = sqrt((r*r)-((d*d)/4));
    S = PI*srednica*srednica;

    cout.setf(ios::fixed);
    cout << fixed << setprecision(2) << S;

return 0;
}
