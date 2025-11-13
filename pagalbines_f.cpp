#include "pagalbines_f.h"
#include <iostream>
#include <climits>
#include <cctype>

using namespace std;

RandInt::RandInt(int low, int high)
    : mt{rd()}, dist{low, high} { }

int RandInt::operator()() {
    return dist(mt);
}

bool ar_skaicius(string reiksme) {
    if (reiksme.empty()) return false;
    for (char r : reiksme)
        if (!isdigit(r)) return false;
    return true;
}

int skaiciaus_ivedimas(string prasymas, int min, int max) {
    string ivestis;
    int value;
    while (true) {
        cout << prasymas;
        cin >> ivestis;

        if (ar_skaicius(ivestis)) {
            value = stoi(ivestis);
            if (value >= min && value <= max)
                return value;
        }
        cout << "Neteisinga ivestis. Bandykite dar karta.\n";
    }
}

size_t atminties_naudojimas_vector(const vector<Studentas>& Grupe) {
    return Grupe.capacity() * sizeof(Studentas);
}

size_t atminties_naudojimas_list(const list<Studentas>& Grupe) {
    return Grupe.size() * (sizeof(Studentas) + 2 * sizeof(void*));
}

void rus_3_strat_vector(vector<Studentas>& Grupe, vector<Studentas>& vargsiukai3, vector<Studentas>& kietiakai3){

            auto it = std::partition(Grupe.begin(), Grupe.end(), [](const Studentas& s){
                float galutinis = (s.getRezultatasVidurkis() + s.getRezultatasMediana())/2.0;
                return galutinis < 5.0;
            });

            vargsiukai3.insert(vargsiukai3.end(), Grupe.begin(), it);
            kietiakai3.insert(kietiakai3.end(), it, Grupe.end());
}



