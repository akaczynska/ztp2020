#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int t;
    long long int L, U;
    cin >> t;

    while(t != 0){
        cin >> L >> U;
        bool T[U];
        long long int i,w,g;


        for(i = 0; i <= U; i++) T[i] = true;
        g = sqrt(U+1);

        for(i = 2; i <= g; i++)
            if(T[i]) for(w = i * i; w <= U; w += i) T[w] = false;

        for(i = L; i <= U; i++)
            if(T[i]) cout << i << endl;

        t--;
    }

return 0;
}
