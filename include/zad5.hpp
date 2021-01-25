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
return std::search_n(begin, end, n, s, predic) != end;
}

//[](T it){return it.getNazwa() == s;}