#pragma once

#include <string>
#include <iostream>

class Zmogus {
protected:
    std::string vard_;
    std::string pav_;

public:
    Zmogus() : vard_(""), pav_("") {}
    Zmogus(const std::string& vardas, const std::string& pavarde) 
        : vard_(vardas), pav_(pavarde) {}

    virtual ~Zmogus() {
        vard_.clear();
        pav_.clear();
    };

    virtual std::string vardas() const { return vard_; }
    virtual std::string pavarde() const { return pav_; }

    virtual void skaiciuotiRezultatus() = 0;
    virtual std::istream& readStudent(std::istream& is) = 0;

};
