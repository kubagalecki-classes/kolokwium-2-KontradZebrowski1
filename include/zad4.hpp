#include "zad1.hpp"

#include <exception>
#include <iostream>
#include <vector>

// tutaj funkcja jedzOstatnieWarzywa
void jedzOstatnieWarzywa(const std::vector<Warzywo>& koszyk, unsigned n, std::ostream& strumyk)
{
if (n > koszyk.size())
{
  throw std::logic_error{"oj"};
}
it = koszyk.crbegin();
it += 1;
for (unsigned i = 0; i < n; i++)
        {
          strumyk << it->opis();
          it++;
        }
}