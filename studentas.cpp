#include "Studentas.h"
#include "skaiciavimo_f.h"
#include <iostream>
#include <sstream>

Studentas::Studentas()
    : vard_(""), pav_(""), egzas_(0), rez_vidurkis_(0.0f), rez_mediana_(0.0f) {
}

Studentas::Studentas(const std::string& vardas, const std::string& pavarde)
    : vard_(vardas), pav_(pavarde), egzas_(0), rez_vidurkis_(0.0f), rez_mediana_(0.0f) {
}

Studentas::Studentas(const std::string& vardas, const std::string& pavarde, const std::vector<int>& pazymiai, int egzaminas)
    : vard_(vardas), pav_(pavarde), paz_(pazymiai), egzas_(egzaminas) {
    skaiciuotiRezultatus();
}

Studentas::Studentas(std::istream& is) {
    readStudent(is);
}

std::istream& Studentas::readStudent(std::istream& is) {
    is >> vard_ >> pav_;

    paz_.clear();
    int pazymys;
    while (is >> pazymys && pazymys != -1) {
        paz_.push_back(pazymys);
    }

    if (is.fail()) {
        is.clear();
    }

    is >> egzas_;
    skaiciuotiRezultatus();
    return is;
}

void Studentas::skaiciuotiRezultatus() {
    rez_vidurkis_ = egzas_ * 0.6f + vidurkis(paz_) * 0.4f;
    rez_mediana_ = egzas_ * 0.6f + mediana(paz_) * 0.4f;
}