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
    int N, a, b;
    cin >> N;
    for(int i = 0; i < N; i++) {
        cin >> a;
        cin >> b;
        cout << a*b/NWD(a, b) << endl;
    }


return 0;
}
