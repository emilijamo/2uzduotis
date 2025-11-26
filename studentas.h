#pragma once

#include <string>
#include <vector>
#include <iostream>
#include "zmogus.h"

using std::string;
using std::vector;


class Studentas : public Zmogus {
private:
    std::vector<int> paz_;
    int egzas_;
    float rez_vidurkis_;
    float rez_mediana_;

public:
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

    inline string vardas() const { return vard_; }
    inline string pavarde() const { return pav_; }
    inline const vector<int>& pazymiai() const { return paz_; }
    inline int egzaminas() const { return egzas_; }
    inline float getRezultatasVidurkis() const { return rez_vidurkis_; }
    inline float getRezultatasMediana() const { return rez_mediana_; }

    friend std::istream& operator>>(std::istream& is, Studentas& studentas);
    friend std::ostream& operator<<(std::ostream& os, const Studentas& studentas);

    std::istream& readStudent(std::istream& is);

    void skaiciuotiRezultatus();
};






