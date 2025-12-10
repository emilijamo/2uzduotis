#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include "studentas.h"


TEST_CASE("Studento bazinis kontruktorius tinkamai inicializuojamas?", "[studentas]") {
    Studentas s;

    REQUIRE(s.pazymiai().empty());
    REQUIRE(s.egzaminas() == 0);
    REQUIRE(s.getRezultatasVidurkis() == 0.0f);
    REQUIRE(s.getRezultatasMediana() == 0.0f);
}

TEST_CASE("Konstruktorius, turint pilnus studento duomenis", "[studentas]") {
    Studentas s("Jonas", "Jonaitis", std::vector<int>{7, 8, 9}, 10);

    REQUIRE(s.vardas() == "Jonas");
    REQUIRE(s.pavarde() == "Jonaitis");
    REQUIRE(s.pazymiai() == std::vector<int>{7,8,9});
    REQUIRE(s.egzaminas() == 10);
}

TEST_CASE("skaiciuotiRezultatus grazina teisingus medianos ir vidurkio rezultatus", "[studentas]") {
    Studentas s("Jonas", "Jonaitis",std::vector<int>{7, 8, 9}, 10);

    s.skaiciuotiRezultatus();
    //rankiniu budu apskaiciuotas rezultatas pagal vidurki: ((7+8+9)/3)*0.4 + 10*0.6
    REQUIRE(s.getRezultatasVidurkis() == 9.2f);
    //rankiniu budu apskaiciuotas rezultatas pagal mediana: 8*0.4 + 10*0.6
    REQUIRE(s.getRezultatasMediana() == 9.2f);
}

TEST_CASE("Kopijavimo konstruktoriaus tinkamas kopijavimas", "[studentas]") {
    Studentas originalas("Jonas", "Jonaitis",std::vector<int>{7, 8, 9}, 10);
    originalas.skaiciuotiRezultatus();

    Studentas kopija(originalas);

    REQUIRE(kopija.vardas() == "Jonas");
    REQUIRE(kopija.pavarde() == "Jonaitis");
    REQUIRE(kopija.pazymiai() == std::vector<int>{7, 8, 9});
    REQUIRE(kopija.egzaminas() == 10);
    REQUIRE(kopija.getRezultatasVidurkis() == originalas.getRezultatasVidurkis());
    REQUIRE(kopija.getRezultatasMediana() == originalas.getRezultatasMediana());
}

TEST_CASE("Priskyrimo operatoriaus veikimas", "[studentas]") {
    Studentas a("Jonas", "Jonaitis",std::vector<int>{7, 8, 9}, 10);
    a.skaiciuotiRezultatus();

    Studentas b;
    b = a;

    REQUIRE(b.vardas() == "Jonas");
    REQUIRE(b.pavarde() == "Jonaitis");
    REQUIRE(b.pazymiai() == std::vector<int>{7, 8, 9});
    REQUIRE(b.egzaminas() == 10);
    REQUIRE(b.getRezultatasVidurkis() == a.getRezultatasVidurkis());
    REQUIRE(b.getRezultatasMediana() == a.getRezultatasMediana());
}
