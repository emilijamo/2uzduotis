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

Studentas::Studentas(const Studentas& kopija)
    : vard_(kopija.vard_), pav_(kopija.pav_), paz_(kopija.paz_), egzas_(kopija.egzas_), rez_vidurkis_(kopija.rez_vidurkis_), rez_mediana_(kopija.rez_mediana_) {
}

Studentas& Studentas::operator=(const Studentas& priskiriamas) {
    if (this != &priskiriamas) {  
        vard_ = priskiriamas.vard_;
        pav_ = priskiriamas.pav_;
        paz_ = priskiriamas.paz_;
        egzas_ = priskiriamas.egzas_;
        rez_vidurkis_ = priskiriamas.rez_vidurkis_;
        rez_mediana_ = priskiriamas.rez_mediana_;
    }
    return *this;
}

Studentas::Studentas(std::istream& is) {
    readStudent(is);
}

std::istream& Studentas::readStudent(std::istream& is) {
    is >> vard_ >> pav_;

    paz_.clear();
    int pazymys;
    while (is >> pazymys) {
        paz_.push_back(pazymys);
    }

    if (is.fail() && !is.eof()) {
        is.clear();
    }

    if (!paz_.empty()) {
        egzas_ = paz_.back();
        paz_.pop_back();
    }

    skaiciuotiRezultatus();
    return is;
}

void Studentas::skaiciuotiRezultatus() {
    rez_vidurkis_ = egzas_ * 0.6f + vidurkis(paz_) * 0.4f;
    rez_mediana_ = egzas_ * 0.6f + mediana(paz_) * 0.4f;

}

