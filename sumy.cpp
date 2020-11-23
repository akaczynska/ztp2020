#include <iostream>
#include <vector>

using namespace std;

void suma(vector <int> tab, int l, int s) {
    if(s == 0) {
        for(int i = 0; i < tab.size(); i++) {
            cout << tab[i] << " ";
        }
        cout << endl;
        return;
    }

    for(int i = l; s - i >= 0; i++) {
        tab.push_back(i);
        suma(tab, i, s - i);
        tab.pop_back();
    }
}

int main() {
    vector <int> tab;
    int t, n;

    cin >> t;
    for(int i = 0; i < t; i++) {
        cin >> n;
        suma(tab, 1, n);
    }


return 0;
}
