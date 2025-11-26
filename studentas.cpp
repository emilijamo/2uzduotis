#include "Studentas.h"
#include "skaiciavimo_f.h"
#include "pagalbines_f.h"
#include <iostream>
#include <sstream>

Studentas::Studentas()
    : Zmogus(), egzas_(0), rez_vidurkis_(0.0f), rez_mediana_(0.0f) {
}

Studentas::Studentas(const std::string& vardas, const std::string& pavarde)
    : Zmogus(vardas,pavarde), egzas_(0), rez_vidurkis_(0.0f), rez_mediana_(0.0f) {
}

Studentas::Studentas(const std::string& vardas, const std::string& pavarde, const std::vector<int>& pazymiai, int egzaminas)
    : Zmogus(vardas,pavarde), paz_(pazymiai), egzas_(egzaminas) {
    skaiciuotiRezultatus();
}

Studentas::Studentas(const Studentas& kopija)
    : Zmogus(kopija), 
      paz_(kopija.paz_), 
      egzas_(kopija.egzas_),
      rez_vidurkis_(kopija.rez_vidurkis_), 
      rez_mediana_(kopija.rez_mediana_) {
}

Studentas& Studentas::operator=(const Studentas& priskiriamas) {
    if (this != &priskiriamas) {  
        Zmogus::operator=(priskiriamas);
        paz_ = priskiriamas.paz_;
        egzas_ = priskiriamas.egzas_;
        rez_vidurkis_ = priskiriamas.rez_vidurkis_;
        rez_mediana_ = priskiriamas.rez_mediana_;
    }
    return *this;
}

std::istream& operator>>(std::istream& is, Studentas& studentas) {
    std::cout << "Iveskite studento duomenis:\n";
    std::cout << "Vardas: ";
    is >> studentas.vard_;
    std::cout << "Pavarde: ";
    is >> studentas.pav_;
    
    studentas.paz_.clear();
    std::cout << "Iveskite pazymius atskirtus tarpais (kad baigti ivedima iveskite 'baigti'): ";
    
    string ivestis;
    while (is >> ivestis) {
        if (ivestis == "baigti") {
            break;
        }
        
        if (ar_skaicius(ivestis)) {
            int pazymys = std::stoi(ivestis);
            if (pazymys >= 1 && pazymys <= 10) {
                studentas.paz_.push_back(pazymys);
            } else {
                std::cout << "Klaida: pazymys " << pazymys << " turi buti intervale nuo 1 iki 10.\n";
            }
        } else {
            std::cout << "Klaida: ivestis '" << ivestis << "' nera skaicius. Baigiamas pazymiu ivedimas.\n";
            break;
        }
    }
    
    is.clear();
    
    std::cout << "Egzamino pazymys: ";
    while (true) {
        is >> ivestis;
        if (ar_skaicius(ivestis)) {
            int egzaminas = std::stoi(ivestis);
            if (egzaminas >= 1 && egzaminas <= 10) {
                studentas.egzas_ = egzaminas;
                break;
            } else {
                std::cout << "Klaida: egzamino pažymys turi būti intervale nuo 1 iki 10. Bandykite dar kartą: ";
            }
        } else {
            std::cout << "Klaida: ivestis nera skaicius. Bandykite dar karta: ";
        }
    }
    
    studentas.skaiciuotiRezultatus();
    std::cout << "Studento duomenys ivesti naudojant ivedimo operatoriu!" << std::endl;
    return is;
}

std::ostream& operator<<(std::ostream& os, const Studentas& studentas) {
    os << studentas.vardas() << " " << studentas.pavarde()  << " " << studentas.getRezultatasVidurkis();
    return os;
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





