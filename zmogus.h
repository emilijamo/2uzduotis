#pragma once

#include <string>
#include <iostream>

/**
 * @class Zmogus
 * @brief Abstrakti klase, apibudinanti zmogu
 *
 * Sioje klaseje saugoma pagrindine informacija apie zmogu: vardas ir pavarde
 */
class Zmogus {
protected:
    std::string vard_; ///< Zmogaus vardas
    std::string pav_; ///< Zmogaus pavarde

public:
    /**
     * @brief Numatytoji konstruktoriu. Sukuria tuscia zmogu
     */
    Zmogus() : vard_(""), pav_("") {}

    /**
     * @brief Konstruktorius su inicializuotu vardu ir pavarde
     * @param vardas Zmogaus vardas
     * @param pavarde Zmogaus pavarde
     */
    Zmogus(const std::string& vardas, const std::string& pavarde) 
        : vard_(vardas), pav_(pavarde) {}

    /**
     * @brief Virtualus destruktorius. Isvalo saugomus laukus
     */
    virtual ~Zmogus() {
        vard_.clear();
        pav_.clear();
    };

    /**
     * @brief Grazina zmogaus varda
     * @return Vardas kaip string
     */
    virtual std::string vardas() const { return vard_; }
    /**
     * @brief Grazina zmogaus pavarde
     * @return Pavarde kaip string
     */
    virtual std::string pavarde() const { return pav_; }

    /**
     * @brief Grynoji virtuali funkcija rezultatams skaiciuoti
     *
     * Turi buti perrasyta paveldetose klasese
     */
    virtual void skaiciuotiRezultatus() = 0;

    /**
     * @brief Grynoji virtuali funkcija studento duomenims nuskaityti
     *
     * @param is Ivesties srautas
     * @return Tas pats ivesties srautas po nuskaitymo
     */
    virtual std::istream& readStudent(std::istream& is) = 0;

};

