//
// Created by yoonl on 3/22/2022.
//

#include "Patrat.h"
#include <math.h>

using namespace std;

Patrat::Patrat() {
    this->x1 = 0.0;
    this->y1 = 0.0;
    this->x2 = 0.0;
    this->y2 = 0.0;
}

Patrat::Patrat(float x1, float y1, float x2, float y2) {
    this->x1 = x1;
    this->y1 = y1;
    this->x2 = x2;
    this->y2 = y2;
}

Patrat::Patrat(const Patrat& p){
    this->x1 = p.x1;
    this->y1 = p.y1;
    this->x2 = p.x2;
    this->y2 = p.y2;
}

void Patrat::set_coordonate(float a, float b, float c, float d) {
    this->x1 = a;
    this->y1 = b;
    this->x2 = c;
    this->y2 = d;
}

float Patrat::get_x1() {
    return this->x1;
}

float Patrat::get_y1() {
    return this->y1;
}

float Patrat::get_x2() {
    return this-> x2;
}

float Patrat::get_y2() {
    return this->y2;
}

float Patrat::get_latura() {
    return sqrt(pow(x2-x1,2)+ pow(y2-y1,2));
}

float Patrat::calculeaza_perimetrul() {
    float latura;
    latura = sqrt(pow(x2-x1,2)+ pow(y2-y1,2));
    return latura * 4;
}

float Patrat::calculeaza_aria() {
    float latura;
    latura = sqrt(pow(x2-x1,2)+ pow(y2-y1,2));
    return latura * latura;
}

float Patrat::diagonala() {
    float latura;
    latura = sqrt(pow(x2-x1,2)+ pow(y2-y1,2));
    return sqrt(2*(latura*latura));
}

Patrat::~Patrat() {
    if((this->x1 != 0.0) &&(this->x2 !=0.0) && (this->y1 !=0.0) && (this->y2 != 0.0))
    {
        this->x1 = 0.0;
        this->y1 = 0.0;
        this->x2 = 0.0;
        this->y2 = 0.0;
    }
};

Patrat &Patrat::operator=(const Patrat &p) {
    this->x1 = p.x1;
    this->y1 = p.y1;
    this->x2 = p.x2;
    this->y2 = p.y2;
    this->get_latura();
    return *this;
}

bool Patrat::operator==(const Patrat &p) {
    return (this->x1 == p.x1) && (this->x2 == p.x2) && (this->y1 == p.y1) && (this->y2 == p.y2);
}

bool Patrat::validator()
{
    return ((this->x1 > 0.0) &&(this->x2 > 0.0) && (this->y1 > 0.0) && (this->y2 > 0.0));
}

std::ostream &operator<<(ostream &os, const Patrat &p){
    os<< p.x1 <<" "<< p.x2 << " " << p.y1 << " " << p.y2;
    return os;
}











