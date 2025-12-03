# 2 užduotis
*Ši programa yra skirta suskaičiuoti galutinius studentų rezultatus iš namų darbų bei egzamino pažymių.*
Namų darbų bei egzamino pažymius galima įvesti pačiam naudotojui, galima pasirinkti galimybę balus sugeneruoti automatiškai (namų darbų balų skaičius taip pat įvedamas naudotojo) arba galima nuskaityti duomenis iš failo.

*Programa leidžia generuoti atsitiktinius studentų pažymius.*
Programa turi funkcionalumą, leidžiantį pasirinkti generuoti atsitiktinius studentų pažymius į failą, taip pat kuriant ir "šabloninius" vardus bei pavardes, t.y. Vardas1 Pavarde1, Vardas2 Pavarde2,...

**Programos rezultatas** 

Įvedant duomenis pažiam naudotojui, rezultatas yra lentelė, kurioje matoma studentų vardai, pavardės ir galutiniai rezultatai.  Taip pat naudotojui suteikiamas pasirinkimas, kaip skaičiuotą rezultatą jis nori matyti galutinėje išvestyje - naudojant medianą, vidurkį ar abiem variantais skaičiuotus rezultatus.
Duomenis nuskaitant iš failo, naudotojas gali pasirinkti, nori matyti rezultatų lentelę terminale ar nori lentelę įrašyti į naują failą. Rezultatas nuskaitant nuo failo yra lentelė, kurioje pateikiami studentų vardai, pavardės ir galutiniai rezultatai, skaičiuoti tiek su mediana, tiek su vidurkiu. Pasirinkus lentelę įrašyti į failą, naudotojas gali studentus išvesti į du failus, išskirstant juos pagal jų galutinį pažymį. Į "vargšiukų" grupę yra skiriami studentai, kurių galutinis pažymys yra mažesnis už 5, o į "kietiakų" grupę skiriami studentai, kurių pažymys yra lygus arba didesnis už 5 (Verta atkreipti dėmesį, kad skirstant į grupes naudojami abiem būdais skaičiuoti galutiniai balai ir studentas į tam tikrą kategoriją skiriamas pagal jų vidurkį).

# Įdiegimo instrukcija

1. Kompiuteryje turėkite įdiegtus cmake interpretatorių bei C++ kompiliatorių. Jei neturite, galite juos įsidiegti čia: https://cmake.org/download/
  https://cmake.org/download/
  https://visualstudio.microsoft.com/downloads/#build-tools-for-visual-studio-2022

3. Iš šios github repozitorijos, atsisiųskite CMakeFiles.txt, duom_ivedimo_isvedimo_f.h, pagalbines_f.h skaiciavimo_f.h,studentas.h,zmogus.h, duom_ivedimo_isvedimo_f.cpp, main.cpp, pagalbines_f.cpp, skaiciavimo_f.cpp, studentas.cpp failus

4. Susikurkite darbinį aplankalą, kuriame norėsite vykdyti programą. Į šį aplanką įdėkite visus parsisiųstusfailus iš github. Šiame aplankale sukurkite dar du aplankalus: src ir Include (būtinai tokiais pavadinimais). Į src aplanką perkelkite visus .cpp failus (duom_ivedimo_isvedimo_f.cpp, main.cpp, pagalbines_f.cpp, skaiciavimo_f.cpp, studentas.cpp), o į Include visus .h failus (duom_ivedimo_isvedimo_f.h, pagalbines_f.h skaiciavimo_f.h,studentas.h,zmogus.h).

5. Tuomet terminalą nueikite iki savo darbinio aplankalo ir tuomet paleiskite šias komandas:
   1) cmake CMakeLists.txt
   2) cmake --build .
   3) cd .\Debug\
   4) .\v2.exe

Norint įdiegimą atlikti greičiau - pakartokite 1-3 žingsnius ir atsisiųskite repozitorijoje esantį run.bat failą. Jį taip pat įsikelkite į darbinį aplanką ir tiesiog paleiskite. Pirmą kartą atlikus įdiegimą programa pasileidžia automatiškai, bet jei norite ją paleisti dar kartą, per terminalą nueikite iki aplanko, kuriame yra .exe failas ir paleiskite jį įvedant terminale .\v2.exe

# Naudojimosi instrukcija

Pasileidus programą, naudotojui leidžiama pasirinkti konteinerį, su kuriuo jis norės vykdyti programą.

Įvedus atitinkamo konteinerio skaičių, naudotojui duodami pasirinkimai, ką gali daryti su programa:

<img width="309" height="125" alt="visi_funkcionalumai" src="https://github.com/user-attachments/assets/0df920ec-e542-4f5f-b8f7-48842272f670" />


*Tolimesnis programos veikimas, pasirinkus* ***1***:

Naudotojas įveda, kiek studentų norį įvesti į programą.

Tuomet atitinkamai įveda studento vardą, pavardę.

Studento pažymius galima įvesti 2 būdais - patiems arba sugeneruojant atsitiktinai:

Pasirinkus įvedimą patiems, naudotojas žinant, kiek pažymių turi studentas, gali įvesti tą skaičių į programą ir tuomet ji leis įvesti tik atitinkamą skaičių pažymių. Naudotojas, nežinant kiek studentas turi pažymių, gali įvesti 'neaisku' ir tuomet vesti pažymius iki kol jie baigias ir įvedimą užbaigti įvedus 'baigti'. Abejais atvejais įvedus visus pažymius, paprašoma įvesti egzamino pažymį.
Pasirinkus atsitiktinį generavimą, naudotojo paklausiama, kiek pažymių nori generuoti. Tuomet atitinkamai išmetamas tas skaičius pažymių ir taip pat sugeneruotas studento pažymys.

Baigus pažymių įvedimą, naudotojas gali pasirinkti, kokiu būdu skaičiuoti galutinį pažymį - medianą, vidurkį ar abu.

Tuomet pasirenkama, kaip rūšiuoti studentus rezultate - pagal vardą ar galutinį pažymį. Po šio įvedimo išmetamos nuorodos į studento vietą atmintyje.

Naudotojas gali pasirinkti, ar nori resultato išvedimo į txt failą, ar ne. Pasirinkus ne, į terminalą išvedama lentelė, kurioje atitinkamai pagal pasirinkimą surūšiuojami studentai ir matomas skaičiuotas galutinis pažymys pagal pasirinktą būdą. Pasirinkus išvedimą į failą, naudotojas gali pasirinkti, ar nori rūšiuoti studentus į vargšiukus ir kietiakus. Jei nori studentai suskirstomi ir atitinkamai išvedami į du failus, kurių pavadinimą įveda naudotojas. Pasirinkus nerūšiuoti studentų, jie išvedami į vieną failą, kurio pavadinimą įveda naudotojas. Faile randama tokia pati lentelė, kuri gaunama ir pasirinkus išvedimą ne į failą.


*Tolimesnis programos veikimas, pasirinkus* ***2***:

Naudotojo paprašoma įvesti failo pavadinimą arba tikslią jo lokaciją kompiuteryje.

Tuomet pasirenkama, kaip rūšiuoti studentus rezultate - pagal vardą ar galutinį pažymį. Po šio įvedimo išmetamos nuorodos į studento vietą atmintyje.

Naudotojas gali pasirinkti, ar nori resultato išvedimo į txt failą, ar ne. Pasirinkus ne, į terminalą išvedama lentelė, kurioje atitinkamai pagal pasirinkimą surūšiuojami studentai ir matomas skaičiuotas galutinis pažymys pagal pasirinktą būdą. Pasirinkus išvedimą į failą, naudotojas gali pasirinkti, ar nori rūšiuoti studentus į vargšiukus ir kietiakus. Jei nori studentai suskirstomi ir atitinkamai išvedami į du failus, kurių pavadinimą įveda naudotojas. Pasirinkus nerūšiuoti studentų, jie išvedami į vieną failą, kurio pavadinimą įveda naudotojas. Faile randama tokia pati lentelė, kuri gaunama ir pasirinkus išvedimą ne į failą.


*Tolimesnis programos veikimas, pasirinkus* ***3***:

Naudotojas įveda failo pavadinimą, į kurį norės išsaugoti sugeneruotus duomenis (pavadinimą būtina įvesti su .txt gale). 

Naudotojas įveda, kiek studentų norės sugeneruotame faile.

Naudotojas įveda, kiek namų darbų pažymių turės kiekvienas studentas.

Naudotojui suteikiamas pasirinkimas nuskaityti sugeneruotą failą iš karto. Jei pasirenkama nuskaityti, tai vykdomas 2 funkcionalumas nuo 2 žingsnio. Jei Nenuskaitoma, programa baigiama. Failas randamas darbiniame aplinke.


*Tolimesnis programos veikimas, pasirinkus* ***4***:

Naudotojo paprašoma įvesti failo pavadinimą, su kuriuo vykdys spartos analizę. Jei failas perskaitomas, naudotojas gauna eilutę: "Failas perskaitytas. Jame yra {atitinkamas skaičius} irasu."

Naudotojo paklausiama, kaip nori rūšiuoti studentus. 

Automatiškai yra suskirstoma į vargšiukus bei kietiakus. 

Kaip rezultatas yra išmetami duomenys apie tam tikrus programos funkcionalumo veikimo laikus:

"Bendri testavimo rezultatai, kai faile yra {atitinkamas skaičius} duomenu :

{atitinkamas laikas} - studentu duomenu nuskaitymas is tekstinio failo.

{atitinkamas laikas} - studentu rusiavimo pagal galutini rezultata laikas.

{atitinkamas laikas} - studentu dalijimo i vargsiukus ir kietiakus laikas.

{atitinkamas laikas} - studentu vargsiuku irasymo i faila laikas.

{atitinkamas laikas} - studentu kietiaku irasymo i faila laikas."


*Tolimesnis programos veikimas, pasirinkus* ***5***:

Naudotojo paprašoma įvesti failo pavadinimą, su kuriuo vykdys strategijų analizę. Jei failas perskaitomas, naudotojas gauna eilutę: "Testavimas bus atliktas su failu, kuriame yra {atitinkamas skaičius} eiluciu."

Kaip rezultatas yra išmetami duomenys apie realizuotų strategijų veikimo laikus ir užimamą vietą atmintyje.

*Proogramos rezultato lentelės pavyzdys*

<img width="324" height="116" alt="rezultatas_vid_pvz" src="https://github.com/user-attachments/assets/cecf23b4-04ec-4b99-b2c5-e001fd492ed7" />


# Kiekvienos versijos aprašymas

*V.01*

- Galimas studentų įvedimas žinant ir nežinant pradinio pažymių skaičiaus
- Apskaičiuojamas studentų galutinis balas pagal pažymių vidurkį bei medianą
- Studentų duomenis į programą galima įkelti ir nuskaitant iš failo
- Išvedami rezultatai lentelėje sūrušiuoti


*V.02 (patobulinta V.01)*

- Studentai gali būti sūrušiuoti į kategorijas ir rezultatai išvedami į faila
- Atliktas kodo refactoringas 
- Pridėtas funkcionalumas - spartos analizė, matuojantis programos funkcionalumų užtrunkamą laiką
  

*V.03 (patobulinta V.02)*

- Vartotojui leidžiama pasirinkti konteinerį, su kuriuo nori dirbti
- Atitinkami metodai pritaikyti std::list vektoriui
- Atlikta spartos analizė abiems konteineriams


*V.10 (patobulinta V.03)* 
 
- Studentų dalijimui pridėtos 2 naujos strategijos ir atlikta jų laiko analizė

*Po šios versijos prasideda 2 užduoties išleistų versijų aprašai, 1 užduoties versijų aprašymai paliekami dėl vientisumo*


*V1.1 (patobulinta V1.0)*

- Nukopijuota senoji pirmosios užduoties repozicija į naująją
- Atlikti kode pakeitimai - pereita nuo ankstesnės studento struktūros į klasę
- Palyginta abiejų programų: naudojančios struct iš ankstesniojo darbo ir naudojančio class tipo Studentus iš dabartinės realizacijos sparta (veikimo laikas), naudojant vieną fiksuotą konteinerį, vektorių, bei pačią greičiausią dalijimo strategiją ir 100000 ir 1000000 dydžio failus. Rezultatus galima rasti apraše (README.md), " Realizacijos spartos testavimas su struct ir class" skiltyje.
- Atlikta eksperimentinė analizė priklausomai nuo kompiliatoriaus optimizavimo lygio, nurodomo per flag'us: O1, O2, O3. Resultatus galima rasti apraše ((README.md), skiltyje "Eksperimentinė analizė"

  
*V1.2 (patobulinta V1.1)*
 
***Rule of Three implementacijos aprašymas***

*Destruktorius*

<img width="275" height="246" alt="image" src="https://github.com/user-attachments/assets/e8461ef9-3ae6-4efb-97a8-73ee286afb38" />

Destruktorius automatiškai išvalo atmintį, kai Studentas objektas yra sunaikinamas. Tai užtikrina, kad visi dinaminiai resursai būtų tinkamai atlaisvinti. Jis iškviečiamas objektui išeinant iš scope, naudojant delete arba programos pabaigoje. Kartu yra apsauga nuo priskyrimo sau pačiam, kas užtikrina, kad seni duomenys būtų perrašyti. Yra grąžinamas reference, kuris leidža grandinį priskyrimą.

*Kopijavimo konstruktorius*

<img width="740" height="168" alt="image" src="https://github.com/user-attachments/assets/6b2ab388-06fd-4f13-abf7-fa9263391071" />

Kopijavimo konstruktorius yra skirtas sukurti nauja Studento klasės objektą, kopijuojant kito objekto duomenis: vardą (vard_), pavardę (pav_), pažymius (paz_), egzamino rezultatą (egz_), bendrą rezultatą, skaičiuojant jį vidurkiu (rez_vidurkis_) ,bendrą rezultatą, skaičiuojant jį mediana (rez_mediana_).

*Priskyrimo operatorius*

<img width="658" height="342" alt="image" src="https://github.com/user-attachments/assets/03172c19-6de1-4037-9fe1-86ccd0bd0f7f" />

Priskyrimo operatorius yra skirtas jau egzistuojančiam Studento objektui priskirti kito Studentas objekto duomenis.

***Perdengti įvesties ir išvesties operatoriai***

*Įvesties ranka operatorius (operator>>)*

*Skaito studento duomenis iš įvesties srauto*

Pavardės ir vardo įvedimas

<img width="703" height="199" alt="image" src="https://github.com/user-attachments/assets/96f62529-adc3-4158-958b-2d5ce39663c9" />

Pažymių įvedimas

Realizuotas analogiškai anksčiau naudotam studentų įvedimui, tik šiuo atveju leidžiama pažymius vesti ne į vis naują eilutę, o vieną nuo kito atskirtus tarpais, įvedimo pabaigą pažymint įvedus žodį 'baigti'. 
<img width="1058" height="639" alt="image" src="https://github.com/user-attachments/assets/9e7c920a-3239-40d5-b790-b9d28d0d830f" />

Egzamino įvedimas

<img width="1110" height="605" alt="image" src="https://github.com/user-attachments/assets/5d586fc4-df34-4d14-a8a5-1e36b74cb932" />

Ši įvedimo realizacija kartu užtikrina tinkamų pažymių įvedimą, t.y. pažymiai priklauso intervalui nuo 1 iki 10 ir yra įvedami skaičiais.


*Išvesties į ekraną operatorius*

*Rašo studento duomenis į išvesties srautą*

<img width="1048" height="128" alt="image" src="https://github.com/user-attachments/assets/f2b119ba-e473-4014-a3c3-2fc4df15b550" />

Šia išvedimo funkcija išvedami studento vardas, pavardė ir galutinis pažymys, skaičiuotas pagal vidurkį į ekraną.


*Įvestis/išvestis su failais*

<img width="555" height="31" alt="image" src="https://github.com/user-attachments/assets/616a01fc-481d-4321-be5e-9c45481f6195" />

<img width="872" height="31" alt="image" src="https://github.com/user-attachments/assets/12e1545f-683d-4909-b506-f4a38d2da9fa" />

Failų įvedimas ir išvedimas realizuotas tokiomis funkcijomis. 



**Rule of Three bei įvedimo/išvedimo operatorių demonstracija**

Kad iliustruoti, kaip šie implementuoti programos atnaujinimai galėtų būti panaudojami, buvo prie meniu pridėtas šeštasis funkcionalumas. Dabar atitinkamai meniu atrodo taip:

<img width="715" height="197" alt="image" src="https://github.com/user-attachments/assets/e20b9f7a-08b3-4362-a658-f8b37f35dcc9" />

Naudotojui pasirinkus šį funkcionalumą, jis įveda studentą, kaip buvo aprašyta, kad reikia naudojant įvesties vektorių, įveda egzamino pažymį ir gauna įvestų rezultatų suvestį, t.y. įvestus studento vardą, pavardę ir galutinį pažymį skaičiuojant pagal vidurkį. Taip iliustruojamas įvedimo/išvedimo operatorių veikimas. 

<img width="983" height="217" alt="image" src="https://github.com/user-attachments/assets/917e3cd6-93a7-464e-a666-47f81eb22712" />

Verta paminėti, kad šiame testavime įvesti 3 pažymiai, kad įvestas Studentas klasės objektas galėtų būti panaudotas tolimesnėje demonstracijoje su Rule of Three objektais:

<img width="1111" height="156" alt="image" src="https://github.com/user-attachments/assets/c74add45-2208-433f-a184-fcb71dcf175c" />

Čia naudotojui yra parodomas objekto kopijavimas bei priskyrimas. Matant tik išvedimą į ekraną sunku matyti, kaip veikia šie konstruktorius ir operatorius, todėl verta pažiūrėti į vidinį kodą, kuriame yra aiškus jų naudojimo kode subtilumai:

<img width="1336" height="453" alt="image" src="https://github.com/user-attachments/assets/e9d560e0-583c-4490-ae7e-8a8972ac64b8" />

Iš čia galima matyti, kad kopija yra identiška pradiniam studentui ir yra sukuriamas naujas objektas, o priskyrimo operatorius priskiria egzistuojančius duomenis jau sukurtam objektui. Priskyrima atlikus ant egzistuojančio objekto jau su duomenimis, tie duomenys iš esmės yra "perrašomi", bet jei egzistuoja keli objektai su tokiais pat duomenimis, priskyrimas vykdomas tik konkrečiam vienam.

*V1.5 aprašymas (patobulinta V1.5)*

Šioje versijoje buvo patobulinta V1.2 versija, sukūrus bazinę (abstract) klasę Zmogus, o prieš tai buvusią klasę Studentas pavertus jos išvestine (derived) klase. Žmogaus klasė bendrai apibrėžia žmogų, t.y. jos atributai yra vardas bei pavardė, o Studento klasėje apibrėžti specifiniai studento atributai, t.y. namų darbų, egzamino pažymiai, galutiniai pažymiai (skaičiuoti mediana ir vidurkiu). 

Atlikus šį pakeitimą kode yra išlaikomas Rule of Three veiksmingumas, kaip ir V1.2 programos versijoje. Toks rezultatas gaunamas vykdant Rule of Three testavimą V1.5 versijoje (rezultatai analogiški ankstesnės versijos testavimui):

<img width="1148" height="534" alt="image" src="https://github.com/user-attachments/assets/196166cb-7ab5-4bc7-910c-51a796a54120" />

***Abtrakčios klasės Zmogus objektų kūrimas***

Klasė žmogus yra abstrakti - jos objektų kurti negalima, o galima kurti tik objektus gautus iš jos išvestinių klasių. Tokie objektai žinome, kad gali būti sukurti, nes sėkmingai versijoje 1.5 įvyko Rule of Three metodų testavimas. Galima pabandyti sukurti abstrakčios klasės objektą, kad įsitikinti, kad jo kurti negalima.

Įvedus tokį kodą į programą:

<img width="504" height="76" alt="image" src="https://github.com/user-attachments/assets/552efd52-90ec-4840-baa6-7c69e56cbbc8" />

Metama atitinkama klaida:

<img width="750" height="49" alt="error" src="https://github.com/user-attachments/assets/ebe86728-7b43-4913-8948-5ea94685dd47" />



# Realizacijos spartos testavimas su struct ir class
Atliktas testavimas su fiksuotu vektoriaus konteineriu, jo greičiausia dalijimo, t.y. 3 anksčiau realizuota strategi ir 100000 bei 1000000 dydžio failus (tokie patys kaip naudoti ankstesniuose testavimuose). Matuojami buvo 5 programos veiksnumai: nuskaitymas iš failo, duomenų rūšiavimas pagal galutinį pažymį(šiuo atveju kreipiamas dėmesys ir į mediana skaičiuota pažymi, ir į vidurkiu), studentų išskirstymas pagal pažymius į vargšiukus ir kietiakus (skirstymo pagrindas apibrėžtas programos aprašyme), tuomet tų grupių išvedimas į du atskirus failus bei bendras programos veikimo laikas, t.y. visų kitų laikų suma.

*Testavimas su Studentu struct*


| Duomenų kiekis | Nuskaitymas | Sort pagal rez | Išskirstymas <5 ir >=5 | <5 įrašymas | >=5 įrašymas | Bendras laikas |
| -------------- | ----------- | -------------- | ---------------------- | ----------- | ------------ | -------------- |
| 100,000        | 0.596       | 1.738          | 0.071                  | 0.414       | 0.609        | 3.429          |
| 1,000,000      | 6.961       | 25.472         | 1.321                  | 1.321       | 5.720        | 46.818         |

*Testavimas su Studentu class*

| Duomenų kiekis | Nuskaitymas | Sort pagal rez | Išskirstymas <5 ir >=5 | <5 įrašymas | >=5 įrašymas | Bendras laikas |
| -------------- | ----------- | -------------- | ---------------------- | ----------- | ------------ | -------------- |
| 100,000        | 0.848       | 1.988          | 0.069                  | 0.587       | 0.645        | 4.136          |
| 1,000,000      | 7.974       | 22.533         | 0.729                  | 4.781       | 7.741        | 43.757         |

# Eksperimentinė analizė
Eksperimentinė analizė atlikta priklausomai nuo kompiliatoriaus optimizavimo lygio, nurodomo per flag'us: O1, O2, O3. Kaip ir realizacijos spartos testavime, analizė atlikta su fiksuotu vektoriaus konteineriu, jo greičiausia dalijimo, t.y. 3 anksčiau realizuota strategi ir 100000 bei 1000000 dydžio failus (tokie patys kaip naudoti ankstesniuose testavimuose). Matuojami buvo 5 programos veiksnumai: nuskaitymas iš failo, duomenų rūšiavimas pagal galutinį pažymį(šiuo atveju kreipiamas dėmesys ir į mediana skaičiuota pažymi, ir į vidurkiu), studentų išskirstymas pagal pažymius į vargšiukus ir kietiakus (skirstymo pagrindas apibrėžtas programos aprašyme), tuomet tų grupių išvedimas į du atskirus failus bei bendras programos veikimo laikas, t.y. visų kitų laikų suma.

*Analizė su Studentu struct*

| Versija | Duomenų kiekis | Nuskaitymas | Sort pagal rez | Išskirstymas <5 ir >=5 | <5 įrašymas | >=5 įrašymas | Bendras laikas | exe Failo dydis (KB) |
| ------- | -------------- | ----------- | -------------- | ---------------------- | ----------- | ------------ | -------------- | ---------------- |
| O1      | 100,000        | 0.410       | 0.686          | 0.056                  | 0.522       | 0.702        | 2.376          | 297              |
| O2      | 100,000        | 0.276       | 0.562          | 0.031                  | 0.278       | 0.401        | 1.549          | 285              |
| O3      | 100,000        | 0.243       | 0.487          | 0.037                  | 0.282       | 0.396        | 1.444          | 308              |
| O1      | 1,000,000      | 3.963       | 8.965          | 0.487                  | 4.246       | 7.021        | 24.539         | 297              |
| O2      | 1,000,000      | 2.982       | 7.469          | 0.442                  | 3.034       | 5.232        | 19.159         | 285              |
| O3      | 1,000,000      | 2.727       | 6.815          | 0.436                  | 3.000       | 4.989        | 17.967         | 308              |

*Analizė su Studentu class*

| Versija | Duomenų kiekis | Nuskaitymas | Sort pagal rez | Išskirstymas <5 ir >=5 | <5 įrašymas | >=5 įrašymas | Bendras laikas | exe Failo dydis (KB) |
| ------- | -------------- | ----------- | -------------- | ---------------------- | ----------- | ------------ | -------------- | ---------------- |
| O1      | 100,000        | 0.485       | 0.908          | 0.029                  | 0.531       | 0.913        | 2.867          | 286              |
| O2      | 100,000        | 0.490       | 0.951          | 0.036                  | 0.436       | 0.591        | 2.504          | 276              |
| O3      | 100,000        | 0.422       | 0.812          | 0.030                  | 0.490       | 0.683        | 2.437          | 305              |
| O1      | 1,000,000      | 4.164       | 11.908         | 0.573                  | 6.569       | 8.142        | 31.356         | 286              |
| O2      | 1,000,000      | 4.603       | 11.870         | 0.428                  | 5.117       | 8.103        | 30.121         | 276              |
| O3      | 1,000,000      | 12.409      | 4.399          | 0.628                  | 5.000       | 8.650        | 31.087         | 305              |


# Greičio tyrimai

*Testavimo sistemos parametrai*

***CPU***: Intel(R) Core(TM) i5-6300U CPU @ 2.40GHz

***RAM***: 8.0 GB

***HDD***: SAMSUNG MZNLN256HMHQ-000, tipas - SSD

*Tyrimai atliekami naudojant konteinerį std::vector*

*Failų generavimo greitis*

Buvo matuojamas failų kūrimo greitis, kuriant failą su ***1000, 10000,100000,1000000,10000000*** studentų ir kiekvienu atveju, pažymėta, kad jie turi po *5* namų darbų pažymius, kad būtų galima lyginti rezultatus tarpusavyje. Matavimas buvo atliktas ***3*** kartus, tokiomis pačiomis sąlygomis ir išvestas vidurkis, pateikiamas 3 skaičių po kablelio tikslumu (milisekundėmis):

| Studentų kiekis | Vidutinis generavimo laikas (s) |
| --------------- | ------------------------------- |
| 1 000           | 0.027                           |
| 10 000          | 0.093                           |
| 100 000         | 1.030                           |
| 1 000 000       | 8.483                           |
| 10 000 000      | 91.611                          |


*Programos veikimo spartos analizė su skirtingais konteineriais*

Ši analizė atlikta naudojant pirmojo generavimo metu gautą failą su atitinkamu studentų skaičiumi, t.y. ***1000, 10000,100000,1000000,10000000***. Matuojami buvo 5 programos veiksnumai: nuskaitymas iš failo, duomenų rūšiavimas pagal galutinį pažymį(šiuo atveju kreipiamas dėmesys ir į mediana skaičiuota pažymi, ir į vidurkiu), studentų išskirstymas pagal pažymius į vargšiukus ir kietiakus (skirstymo pagrindas apibrėžtas programos aprašyme), tuomet tų grupių išvedimas į du atskirus failus bei bendras programos veikimo laikas, t.y. visų kitų laikų suma. Analizė buvo atlikta ***3*** kartus, tokiomis pačiomis sąlygomis ir išvestas vidurkis, pateikiamas 3 skaičių po kablelio tikslumu (milisekundėmis): 

**Testavimas su konteineriu std::vector**

*1000 eilučių testavimas*

| Veiksmas             | Laikas (s) |
| -------------------- | ---------- |
| Nuskaitymas          | 0.007      |
| Rūšiavimas           | 0.010      |
| Išskirstymas         | 0.001      |
| „Vargšiukų“ įrašymas | 0.008      |
| „Kietiakų“ įrašymas  | 0.008      |
| **Bendras laikas**   | **0.034**  |


*10000 eilučių testavimas*

| Veiksmas             | Laikas (s) |
| -------------------- | ---------- |
| Nuskaitymas          | 0.048      |
| Rūšiavimas           | 0.083      |
| Išskirstymas         | 0.007      |
| „Vargšiukų“ įrašymas | 0.032      |
| „Kietiakų“ įrašymas  | 0.045      |
| **Bendras laikas**   | **0.216**  |



*100000 eilučių testavimas*

| Veiksmas             | Laikas (s) |
| -------------------- | ---------- |
| Nuskaitymas          | 0.458      |
| Rūšiavimas           | 1.140      |
| Išskirstymas         | 0.076      |
| „Vargšiukų“ įrašymas | 0.305      |
| „Kietiakų“ įrašymas  | 0.445      |
| **Bendras laikas**   | **2.424**  |



*1000000 eilučių testavimas*

| Veiksmas             | Laikas (s) |
| -------------------- | ---------- |
| Nuskaitymas          | 4.775      |
| Rūšiavimas           | 13.834     |
| Išskirstymas         | 0.792      |
| „Vargšiukų“ įrašymas | 2.952      |
| „Kietiakų“ įrašymas  | 4.758      |
| **Bendras laikas**   | **27.111** |



*10000000 eilučių testavimas*

| Veiksmas             | Laikas (s)  |
| -------------------- | ----------- |
| Nuskaitymas          | 46.233      |
| Rūšiavimas           | 161.059     |
| Išskirstymas         | 9.637       |
| „Vargšiukų“ įrašymas | 30.190      |
| „Kietiakų“ įrašymas  | 43.593      |
| **Bendras laikas**   | **290.712** |



**Testavimas su konteineriu std::list**

Ši analizė atlikta naudojant pirmojo generavimo metu gautą failą su atitinkamu studentų skaičiumi, t.y. ***1000, 10000,100000,1000000,10000000*** - tokie patys failai, kokie naudoti konteinrio std::vector analizėje. Matuojami buvo 5 programos veiksnumai: nuskaitymas iš failo, duomenų rūšiavimas pagal galutinį pažymį(šiuo atveju kreipiamas dėmesys ir į mediana skaičiuota pažymi, ir į vidurkiu), studentų išskirstymas pagal pažymius į vargšiukus ir kietiakus (skirstymo pagrindas apibrėžtas programos aprašyme), tuomet tų grupių išvedimas į du atskirus failus bei bendras programos veikimo laikas, t.y. visų kitų laikų suma. Tiek failų kūrimas, tiek ir surūšiuotų rezultatų išvedimas į failus nepriklauso nuo naudojamo konteinerio, bet, kad būtų galima palyginti bendrą veikimo laiką su skirtingais konteineriais, tai yra matuojami ir šie laikai. Analizė buvo atlikta ***3*** kartus, tokiomis pačiomis sąlygomis ir išvestas vidurkis, pateikiamas 3 skaičių po kablelio tikslumu (milisekundėmis): 

*1000 eilučių testavimas*

| Veiksmas             | Laikas (s) |
| -------------------- | ---------- |
| Nuskaitymas          | 0.012      |
| Rūšiavimas           | 0.008      |
| Išskirstymas         | 0.001      |
| „Vargšiukų“ įrašymas | 0.007      |
| „Kietiakų“ įrašymas  | 0.008      |
| **Bendras laikas**   | **0.035**  |



*10000 eilučių testavimas*

| Veiksmas             | Laikas (s) |
| -------------------- | ---------- |
| Nuskaitymas          | 0.080      |
| Rūšiavimas           | 0.134      |
| Išskirstymas         | 0.015      |
| „Vargšiukų“ įrašymas | 0.064      |
| „Kietiakų“ įrašymas  | 0.065      |
| **Bendras laikas**   | **0.358**  |



*100000 eilučių testavimas*

| Veiksmas             | Laikas (s) |
| -------------------- | ---------- |
| Nuskaitymas          | 0.619      |
| Rūšiavimas           | 1.284      |
| Išskirstymas         | 0.142      |
| „Vargšiukų“ įrašymas | 0.456      |
| „Kietiakų“ įrašymas  | 0.513      |
| **Bendras laikas**   | **3.014**  |



*1000000 eilučių testavimas*

| Veiksmas             | Laikas (s) |
| -------------------- | ---------- |
| Nuskaitymas          | 5.871      |
| Rūšiavimas           | 14.653     |
| Išskirstymas         | 1.041      |
| „Vargšiukų“ įrašymas | 4.247      |
| „Kietiakų“ įrašymas  | 6.393      |
| **Bendras laikas**   | **32.205** |



*10000000 eilučių testavimas*

| Veiksmas             | Laikas (s)  |
| -------------------- | ----------- |
| Nuskaitymas          | 61.269      |
| Rūšiavimas           | 192.896     |
| Išskirstymas         | 27.693      |
| „Vargšiukų“ įrašymas | 40.411      |
| „Kietiakų“ įrašymas  | 70.382      |
| **Bendras laikas**   | **392.652** |


**Skirtingų studentų dalijimo strategijų analizė**

Ši analizė atlikta naudojant pirmojo generavimo metu gautą failą su atitinkamu studentų skaičiumi, t.y. ***1000, 10000,100000,1000000,10000000*** - tokie patys failai, kokie naudoti ir konteinerių palyginimo analizėje. Buvo matuojamas laikas, kurį kiekviena strategija užtrunka rūšiuojant studentus į "Vargšiukų" bei "Kietiakų" grupes. Analizė buvo atlikta ***3*** kartus, tokiomis pačiomis sąlygomis ir išvestas vidurkis, pateikiamas 3 skaičių po kablelio tikslumu (milisekundėmis):

*Testavimas su konteineriu std::vector*

| Duomenų kiekis | 1 str  | 2 str  | 3 str |
| -------------- | ------ | ------ | ----- |
| 1,000          | 0.002  | 0.002  | 0.001 |
| 10,000         | 0.023  | 0.046  | 0.005 |
| 100,000        | 0.114  | 0.342  | 0.050 |
| 1,000,000      | 1.196  | 4.093  | 0.495 |
| 10,000,000     | 14.789 | 63.229 | 7.798 |


*Atminties analizė*

1 strategija

| Duomenų kiekis | Bendras studentai (B) | Vargsiukai (B) | Kietiakai (B) | Viso (B)      |
| -------------- | --------------------- | -------------- | ------------- | ------------- |
| 1,000          | 104,000               | 53,248         | 106,496       | 263,744       |
| 10,000         | 1,040,000             | 851,968        | 851,968       | 2,743,936     |
| 100,000        | 10,400,000            | 6,815,744      | 6,815,744     | 24,031,488    |
| 1,000,000      | 104,000,000           | 54,525,952     | 109,051,904   | 267,577,856   |
| 10,000,000     | 1,040,000,000         | 436,207,616    | 872,415,232   | 2,348,622,848 |


2 strategija

| Duomenų kiekis | Vargsiukai (B) | Kietiakai (rezervuota) (B) | Kietiakai (sumažinta) (B) | Viso prieš (B) | Viso po (B)   |
| -------------- | -------------- | -------------------------- | ------------------------- | -------------- | ------------- |
| 1,000          | 53,248         | 104,000                    | 59,488                    | 157,248        | 112,736       |
| 10,000         | 851,968        | 1,040,000                  | 612,560                   | 1,891,968      | 1,464,528     |
| 100,000        | 6,815,744      | 10,400,000                 | 6,095,648                 | 17,215,744     | 12,911,392    |
| 1,000,000      | 54,525,952     | 104,000,000                | 60,963,760                | 158,525,952    | 115,489,712   |
| 10,000,000     | 436,207,616    | 1,040,000,000              | 610,308,192               | 1,476,207,616  | 1,046,515,808 |


3 strategija

| Duomenų kiekis | Bendras studentai (B) | Vargsiukai (B) | Kietiakai (B) | Viso (B)      |
| -------------- | --------------------- | -------------- | ------------- | ------------- |
| 1,000          | 104,000               | 44,928         | 59,072        | 208,000       |
| 10,000         | 1,040,000             | 427,648        | 612,352       | 2,080,000     |
| 100,000        | 10,400,000            | 4,301,336      | 6,098,664     | 20,800,000    |
| 1,000,000      | 104,000,000           | 43,017,832     | 60,982,168    | 208,000,000   |
| 10,000,000     | 1,040,000,000         | 429,491,088    | 610,508,912   | 2,080,000,000 |


*Testavimas su konteineriu std::list*

| Duomenų kiekis | 1 str  | 2 str | 3 str |
| -------------- | ------ | ----- | ----- |
| 1,000          | 0.002  | 0.000 | 0.001 |
| 10,000         | 0.017  | 0.004 | 0.010 |
| 100,000        | 0.227  | 0.042 | 0.063 |
| 1,000,000      | 1.867  | 0.035 | 0.731 |
| 10,000,000     | 18.544 | 4.345 | 9.828 |


*Atminties analizė*

1 strategija

| Duomenų kiekis | Bendras studentai (B) | Vargsiukai (B) | Kietiakai (B) | Viso (B)      |
| -------------- | --------------------- | -------------- | ------------- | ------------- |
| 1,000          | 120,000               | 51,840         | 68,160        | 240,000       |
| 10,000         | 1,200,000             | 493,440        | 706,560       | 2,400,000     |
| 100,000        | 12,000,000            | 4,963,080      | 7,036,920     | 24,000,000    |
| 1,000,000      | 120,000,000           | 49,635,960     | 70,364,040    | 240,000,000   |
| 10,000,000     | 1,200,000,000         | 495,566,640    | 704,433,360   | 2,400,000,000 |


2 strategija

| Duomenų kiekis | Vargsiukai (B) | Kietiakai (atitinkamai studentų sąrašas) (B) | Viso (B)      |
| -------------- | -------------- | -------------------------------------------- | ------------- |
| 1,000          | 51,840         | 68,160                                       | 120,000       |
| 10,000         | 493,440        | 706,560                                      | 1,200,000     |
| 100,000        | 4,963,080      | 7,036,920                                    | 12,000,000    |
| 1,000,000      | 49,635,960     | 70,364,040                                   | 120,000,000   |
| 10,000,000     | 495,566,640    | 704,433,360                                  | 1,200,000,000 |


3 strategija

| Duomenų kiekis | Bendras studentai (B) | Vargsiukai (B) | Kietiakai (B) | Viso (B)      |
| -------------- | --------------------- | -------------- | ------------- | ------------- |
| 1,000          | 0                     | 51,840         | 68,160        | 120,000       |
| 10,000         | 0                     | 493,440        | 706,560       | 1,200,000     |
| 100,000        | 0                     | 4,963,080      | 7,036,920     | 12,000,000    |
| 1,000,000      | 0                     | 49,635,960     | 70,364,040    | 120,000,000   |
| 10,000,000     | 0                     | 495,566,640    | 704,433,360   | 1,200,000,000 |







