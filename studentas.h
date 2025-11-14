#pragma once

#include <string>
#include <vector>
#include <iostream>

using std::string;
using std::vector;


class Studentas {
private:
    std::string vard_;
    std::string pav_;
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
        vard_.clear();
        pav_.clear();
        paz_.clear();
        egzas_ = 0;
        rez_vidurkis_ = 0.0f;
        rez_mediana_ = 0.0f;
    }

    inline string vardas() const { return vard_; }
    inline string pavarde() const { return pav_; }
    inline const vector<int>& pazymiai() const { return paz_; }
    inline int egzaminas() const { return egzas_; }
    inline float getRezultatasVidurkis() const { return rez_vidurkis_; }
    inline float getRezultatasMediana() const { return rez_mediana_; }

    std::istream& readStudent(std::istream& is);

    void skaiciuotiRezultatus();
};


