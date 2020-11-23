#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

bool tab[100000];

int main() {
    const int SIZE = 1000000010;
    vector <int> liczbyPierwsze;

    for(int i = 2; i <= sqrt(SIZE); i++) {
        if(tab[i]) continue;
        liczbyPierwsze.push_back(i*i);
        for(int j = 2*i; j <= sqrt(SIZE); j += i)
            tab[j] = true;
    }

    int a, b, t;

    cin >> t;

    while(t--) {
        cin >> a >> b;
        int zlicz = 0;
        for(int i = 0; i < liczbyPierwsze.size(); i++) {
            if(liczbyPierwsze[i] >= a && liczbyPierwsze[i] <= b)
                zlicz++;
            if(liczbyPierwsze[i] > b)
                break;
        }
        cout << zlicz << endl;
    }

return 0;
}
