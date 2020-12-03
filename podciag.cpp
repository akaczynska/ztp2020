#include <iostream>
#include <string>

using namespace std;

int najdluzszyPodciag(string slowo1, string slowo2){
    int maximum = 0, i, dlugosc1, dlugosc2;
    dlugosc1 = slowo1.length();
    dlugosc2 = slowo2.length();
    int macierz[1001][1001];

    for (int j = 0; j < dlugosc1; j++) {
        for (int k = 0; k < dlugosc2; k++) {
            if (slowo1[j] == slowo2[k]) {
                macierz[j + 1][k + 1] = 1 + macierz[j][k];
            }
            else {
                maximum = macierz[j + 1][k];
                if (macierz[j][k + 1] > maximum) maximum = macierz[j][k + 1];
                macierz[j + 1][k + 1] = maximum;
            }
        }
    }
return macierz[dlugosc1][dlugosc2];
}

int main(){

	int t, i, dlugosc1, dlugosc2, wynik;
	string slowo1, slowo2;

	cin >> t;
	for (i = 0; i < t; i++) {
		cin >> dlugosc1 >> slowo1;
		cin >> dlugosc2 >> slowo2;
	    wynik = najdluzszyPodciag(slowo1, slowo2);
		cout << wynik <<  "\n";
	}
	return 0;
}
