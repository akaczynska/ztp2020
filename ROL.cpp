#include <iostream>

using namespace std;

int main() {
    int s, n;
    cin >> s;

    for(int i = 0; i < s; i++) {
        int liczba, input;

        cin >> n;
        for(int i = 0; i < n; i++) {
            cin >> input;
            if(i == 0) liczba = input;
            else cout << input << " ";
        }
        cout << liczba << endl;
    }
return 0;
}
