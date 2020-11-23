#include <iostream>

using namespace std;

int main() {
    int D, N, a, b;

    int polnoc, poludnie, zachod, wschod;
    int pionowo, poziomo;

    int kierunek1, kroki1;
    int kierunek2, kroki2;

    cin >> D;
    for(int i = 0; i < D; i++) {

        polnoc = 0;
        poludnie = 0;
        zachod = 0;
        wschod = 0;

        cin >> N;
        for(int j = 0; j < N; j++) {
            cin >> a;
            cin >> b;

            if(a == 0) polnoc += b;
            if(a == 1) poludnie += b;
            if(a == 2) zachod += b;
            if(a == 3) wschod += b;

        }

        pionowo = polnoc - poludnie;
        poziomo = zachod - wschod;

        if(pionowo == 0 && poziomo == 0) {
            cout << "studnia" << endl;
            continue;
        }

        if(pionowo > 0) {
            kierunek1 = 0;
            kroki1 = pionowo;
        }
        else {
            kierunek1 = 1;
            kroki1 = -pionowo;
        }

        if(poziomo > 0) {
            kierunek2 = 2;
            kroki2 = poziomo;
        }
        else {
            kierunek2 = 3;
            kroki2 = -poziomo;
        }

        if(kroki1 == 0) {
            cout << kierunek2 << " " << kroki2 << endl;
        }
        else if(kroki2 == 0) {
            cout << kierunek1 << " " << kroki1 << endl;
        }
        else {
            cout << kierunek1 << " " << kroki1 << endl << kierunek2 << " " << kroki2 << endl;
        }
    }

return 0;
}
