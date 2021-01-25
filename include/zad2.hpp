#pragma once

#include "catch.hpp"
#include "chrup.hpp"

// tutaj klasy Ogorek, Zielony i Kiszony
class Ogorek
{
public:
virtual std::string chrup() = 0;
};

class Kiszony : public Ogorek
{
public:
std::string chrup()
{
return chrupKiszony();
}
};

class Zielony : public Ogorek
{
public:
std::string chrup()
{
  return chrupZielony();
}
};

std::string jedzOgorek( Ogorek* ogor )
{
  if (dynamic_cast<Zielony*>(ogor) != nullptr)
  {
    return"Zielony: " + Ogorek.chrup ;
  }
  else if (dynamic_cast<Kiszony*>(ogor) != nullptr)
  {
    return "Kiszony: " + Ogorek.chrup ;
  }
}