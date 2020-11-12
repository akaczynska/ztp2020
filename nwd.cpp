#include <iostream>

using namespace std;

int NWD(int a, int b)
{
   while(a != b) {
    if(a > b)
        a -= b;
    else
        b -= a;
   }
   return a;
}

int main() {
    int t, a, b;
    cin >> t;
    for(int i = 0; i < t; i++) {
        cin >> a;
        cin >> b;
        cout << NWD(a, b) << endl;
    }

return 0;
}
