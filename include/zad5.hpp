#include "zad1.hpp"

#include <algorithm>
#include <deque>
#include <vector>

// tutaj algorytm liczKolejneWarzywa

bool predic(std::string s, Warzywo* it)
{
  return s == it->getNazwa();
}

template <typename T>
bool liczKolejneWarzywa(T begin, T end, unsigned n, const std::string& s)
{
  std::vector<std::string> menu;
  for(auto it = begin; it != end; ++it)
  {
    menu.emplace_back(it->getNazwa());
  }
return std::search_n(menu.begin, menu.end, n, s) != end;
}

//[](T it){return it.getNazwa() == s;}