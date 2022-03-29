//
// Created by yoonl on 3/22/2022.
//
#include <iostream>
#include "Patrat.h"
#include "assert.h"
#include <math.h>
#include "consola.h"

void test_constructor()
{
    Patrat p;
    assert(p.get_latura() == 0.0);
}

void test_setter_coordonate(){
    Patrat p;
    p.set_coordonate(7,7,3,4);
    assert(p.get_latura() == 5.0);
}

void test_constructor_param(){
    Patrat p(3,4,7,7);
    assert(p.get_latura() == 5.0);
}

void test_perimetru(){
    Patrat p;
    p.set_coordonate(7,7,3,4);
    assert(p.calculeaza_perimetrul() == 20.0);
}

void test_diagonala(){
    Patrat p;
    p.set_coordonate(7,7,3,4);
    float diag = p.diagonala();
    assert(int(diag) == 7);
}

void test_operatii(){
    Patrat p1(3, 4, 7, 7);
    Patrat p2(1,2,3,4);
    Patrat p3(3, 4, 7, 7);
    Patrat p4(10,20,9,8);

    p2 = p1;
    assert(p2.get_latura() == 5.0);

    assert(p1 == p3);
    assert(!(p1 == p4));
}

void test_aria()
{
    Patrat p;
    p.set_coordonate(7,7,3,4);
    assert(p.calculeaza_aria() == 25.0);
}

void test_referinta()
{
    Patrat p1;
    p1.set_coordonate(7,7,3,4);
    Patrat p2;
    p2 = Patrat(p1);
    assert(p2.calculeaza_aria() == 25);
}

void test_validator()
{
    int ok1=0,ok2=0;
    Patrat p1;
    p1.set_coordonate(2,3,4,5);
    if(p1.validator())
        ok1 = 1;
    Patrat p2;
    p2.set_coordonate(-1,2,-3,4);
    if(p2.validator())
        ok2 = 1;

    assert(ok1 == 1);
    assert(ok2 == 0);
}

void test_biggestsquare()
{
    Patrat p1;
    Patrat p2;
    p1.set_coordonate(2,3,4,5);
    p2.set_coordonate(9 ,2,8,4);
    int a1 = p1.calculeaza_aria();
    int a2 = p2.calculeaza_aria();
    assert(a1>a2);
}

void test_getterpcts()
{
    Patrat p1;
    Patrat p2;
    p1.set_coordonate(2,3,4,5);
    p2.set_coordonate(-1 ,2,-3,4);
    assert(p1.get_x1() == 2);
    assert(p1.get_y1() == 3);
    assert(p1.get_x2() == 4);
    assert(p1.get_y2() == 5);
    assert(p2.get_x1() == -1);
    assert(p2.get_y1() == 2);
    assert(p2.get_x2() == -3);
    assert(p2.get_y2() == 4);
}

void test_longestsubsecv()
{
    Patrat p1;
    Patrat p2;
    Patrat p3;
    Patrat p4;
    p1.set_coordonate(2,3,4,5);
    p2.set_coordonate(1 ,2,3,4);
    p3.set_coordonate(1,2,3,4);
    p4.set_coordonate(1 ,2,3,4);
    int n,s,e;
    Patrat v[4];
    v[1] = p1;
    v[2] = p2;
    v[3] = p3;
    v[4] = p4;

}

void tests()
{
    test_constructor();
    test_setter_coordonate();
    test_constructor_param();
    test_aria();
    test_operatii();
    test_perimetru();
    test_referinta();
    test_diagonala();
    test_validator();
    test_getterpcts();
    test_biggestsquare();
}