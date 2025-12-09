#pragma once

#include <string>
#include <vector>
#include <iostream>
#include "zmogus.h"

using std::string;
using std::vector;

/**
 * @class Studentas
 * @brief Tai isvestine (derived) klase,sauganti studento duomenis ir juos apdorojanti
 *
 * Paveldi iš bazines klases Zmogus varda bei pavarde ir prideda studentui budingus duomenis: pazymiu sarasa, egzamino rezultata, galutinio balo skaiciavima pagal vidurki ir mediana
 */

class Studentas : public Zmogus {
private:
    std::vector<int> paz_; /// Namu darbu pazymiu vektorius
    int egzas_; /// Egzamino pazymys
    float rez_vidurkis_; /// Galutinis balas pagal vidurki
    float rez_mediana_; /// Galutinis balas pagal mediana

public:
    /**
     * @brief Numatytais parametrais sukurtas studentas.
     */
    Studentas();

    Studentas(const string& vard, const string& pav);
    Studentas(const string& vard, const string& pav, const vector<int>& paz, int egzas);
    Studentas(std::istream& is);
    
    ~Studentas() {
        paz_.clear();
        egzas_ = 0;
        rez_vidurkis_ = 0.0f;
        rez_mediana_ = 0.0f;
    }

    Studentas(const Studentas& kopija);  
    Studentas& operator=(const Studentas& priskiriamas);  

    inline string vardas() const override { return vard_; }
    inline string pavarde() const override { return pav_; }
    inline const vector<int>& pazymiai() const { return paz_; }
    inline int egzaminas() const { return egzas_; }
    inline float getRezultatasVidurkis() const { return rez_vidurkis_; }
    inline float getRezultatasMediana() const { return rez_mediana_; }

    friend std::istream& operator>>(std::istream& is, Studentas& studentas);
    friend std::ostream& operator<<(std::ostream& os, const Studentas& studentas);

    std::istream& readStudent(std::istream& is) override;

    void skaiciuotiRezultatus() override;
};








