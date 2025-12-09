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
     * @brief Su numatytais parametrais sukurtas studentas
     */
    Studentas();

    /**
     * @brief Konstruktorius turint varda ir pavarde
     * @param vard Studento vardas
     * @param pav Studento pavarde
     */
    Studentas(const string& vard, const string& pav);

    /**
     * @brief Konstruktorius su visais pagrindiniais studento duomenimis
     * @param vard Studento vardas
     * @param pav Studento pavarde
     * @param paz Studento namu darbu pazymiai
     * @param egzas Studento egzamino rezultatas
     */
    Studentas(const string& vard, const string& pav, const vector<int>& paz, int egzas);

    /**
     * @brief Konstruktorius, nuskaitantis duomenis is srauto
     * @param is Ivesties srautas
     */
    Studentas(std::istream& is);
    
    /**
     * @brief Destruktorius – išvalo pažymių vektorių ir nustato reikšmes į nulį.
     */
    ~Studentas() {
        paz_.clear();
        egzas_ = 0;
        rez_vidurkis_ = 0.0f;
        rez_mediana_ = 0.0f;
    }

    /**
     * @brief Kopijavimo konstruktorius
     * @param kopija Objektas, is kurio kopijuojama
     */
    Studentas(const Studentas& kopija);  

    /**
     * @brief Priskyrimo operatorius
     * @param priskiriamas Objektas, kurio reiksmes priskiriamos
     */
    Studentas& operator=(const Studentas& priskiriamas);  

    /// @return Studento vardas
    inline string vardas() const override { return vard_; }
    /// @return Studento pavarde
    inline string pavarde() const override { return pav_; }
    /// @return Studento pazymiu vektorius
    inline const vector<int>& pazymiai() const { return paz_; }
    /// @return Egzamino balas
    inline int egzaminas() const { return egzas_; }
    /// @return Galutinis balas pagal vidurki
    inline float getRezultatasVidurkis() const { return rez_vidurkis_; }
    /// @return Galutinis balas pagal mediana
    inline float getRezultatasMediana() const { return rez_mediana_; }

    /**
     * @brief Ivesties operatorius studento duomenims skaityti
     * @param is Ivesties srautas
     * @param studentas Studentas, i kuri irasomi duomenys
     * @return Atnaujintas ivesties srautas
     */
    friend std::istream& operator>>(std::istream& is, Studentas& studentas);

    /**
     * @brief Isvesties operatorius studento duomenims spausdinti
     * @param os Isvesties srautas
     * @param studentas Objektas, kurio duomenys spausdinami
     * @return Atnaujintas isvesties srautas
     */
    friend std::ostream& operator<<(std::ostream& os, const Studentas& studentas);

    /**
     * @brief Nuskaito studento duomenis is srauto (virtuali funkcija)
     * @param is Ivesties srautas
     * @return Tas pats srautas po nuskaitymo
     */
    std::istream& readStudent(std::istream& is) override;

    /**
     * @brief Apskaiciuoja galutinius studento rezultatus pagal (vidurki ir mediana)
     *
     * Naudoja turimus pazymius ir egzamino bala
     */
    void skaiciuotiRezultatus() override;
};









