#pragma once

#include "zad1.hpp"

#include <functional>

// tutaj szablon gotujZupe
template <typename T>
unsigned gotujZupe(const Warzywo& w, const T& cos)
{
  return cos.gotuj(w)*cos.gotuj(w);
}