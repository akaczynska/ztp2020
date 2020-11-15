#include <iostream>

using namespace std;

int main()
{
    string a, b, wynik;

    int t;
    cin >> t;

    for(int i = 0; i < t; i++)
    {
        cin >> a;
        cin >> b;

        for(int j = 0; j < min(a.length(), b.length()); j++)
        {
            for(int k = 0; k < min(a.length(), b.length()); k++) {
                wynik += a.at(k);
                wynik += b.at(k);
                j++;
            }
        }
        cout << wynik << endl;
        wynik.clear();
    }

return 0;
}
