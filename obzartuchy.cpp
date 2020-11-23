#include <iostream>

using namespace std;

int main() {
    int t, N, M, ciastka, pudelka, czas;

    cin >> t;
    for(int i = 0; i < t; i++) {
        cin >> N;
        cin >> M;
        ciastka = 0;

        for(int j = 0; j < N; j++) {
            cin >> czas;
            ciastka += 86400 / czas;
        }

        if(ciastka % M == 0) pudelka = ciastka / M;
        else pudelka = (ciastka / M) + 1;
        cout << pudelka << endl;
    }
return 0;
}
