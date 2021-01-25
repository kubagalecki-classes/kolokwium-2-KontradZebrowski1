#pragma once

#include "catch.hpp"

#include <ostream>
#include <sstream>
#include <string>

// tutaj klasa Warzywo
class Warzywo
{
public:

Warzywo(const std::string& n, double c, int k): nazwa(n), cena(c), kolor(k) { ++liczbaWarzyw; }

~Warzywo() { --liczbaWarzyw; }

static unsigned getVeg() { return liczbaWarzyw; }

void opis(std::ostream& a) const 
{
  a << nazwa <<": "<<cena<<", "<<kolor<<"\n";
}

const std::string getNazwa() {return nazwa;}

private:
std::string nazwa;
double cena;
int kolor;
inline static unsigned liczbaWarzyw;
};

//unsigned Warzywo::liczbaWarzyw = 0;