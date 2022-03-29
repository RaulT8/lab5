//
// Created by yoonl on 3/22/2022.
//

#ifndef SQUARE_PATRAT_H
#define SQUARE_PATRAT_H
#pragma once
#include "ostream"
using namespace std;

class Patrat {
private:
    float x1,y1,x2,y2;

public:
    /**
     * constructorul patratului
     *
     */
    Patrat();
    /**
     * referinta patratului
     *
     */
    Patrat(const Patrat& p);
    /**
     * constructor patrat cu parametri
     *
     */
    Patrat(float x1, float y1, float x2, float y2);
    /**
     * setter pentru coordonatele patratului
     *
     */
    void set_coordonate(float a, float b, float c, float d);
    /**
     * validator pentru existenta patratului in primul cadran
     *@return true daca el se afla in primul cadran,false altfel
     */
    bool validator();
    /**
     * getter pentru abscisa primului punct de pe diagonala
     *@return valoarea acesteia
     */
    float get_x1();
    /**
     * getter pentru ordonata primului punct de pe diagonala
     *@return valoarea acesteia
     */
    float get_y1();
    /**
     * getter pentru abscisa celui de-al 2lea punct de pe diagonala
     *@return valoarea acesteia
     */
    float get_x2();
    /**
     * getter pentru ordonata celui de-al 2lea punct de pe diagonala
     *@return valoarea acesteia
     */
    float get_y2();
    /**
     * getter pentru latura patratului
     * @return lungimea laturii
     */
    float get_latura();
    /**
     * formula de calcul pentru perimetrul patratului
     * @return perimetrul
     */
    float calculeaza_perimetrul();
    /**
     * formula de calcul pentru aria patratului
     * @return aria patratului
     */
    float calculeaza_aria();
    /**
     * formula de calcul pentru diagonala patratului
     * @return diagonala
     */
    float diagonala();
    /**
     * destructorul patratului
     *
     */
    ~Patrat();
    /**
     * operator de afisare
     * @return afiseaza instanta
     */
    friend std::ostream& operator<<(std::ostream& os, const Patrat& p);
    /**
     * clona patratului
     * @return stocheaza intr-o alta instanta pe cea initiala
     */
    Patrat& operator=(const Patrat& p);
    /**
     * operator de comparatie
     * @return true daca patratele au laturi egale,false altfel
     */
    bool operator==(const Patrat& p);

};


#endif //SQUARE_PATRAT_H
