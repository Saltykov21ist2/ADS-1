// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"
bool checkPrime(uint64_t value) {
  if (value <=1)
    return false;
  for (int mv = 2; mv <= (value/2); mv++) {
    if ((value % mv) == 0)
      return false;
  }
  return true;
}

uint64_t nPrime(uint64_t n) {
  uint64_t a = 0;
  uint64_t mv = 0;
  while (mv != n) {
    a++;
    if (checkPrime(a))
      mv++;
  }
  return a;
}

uint64_t nextPrime(uint64_t value) {
  value++;
    while (checkPrime(value) != true) {
      value++;
    }
    return value;
}


uint64_t sumPrime(uint64_t hbound) {
  uint64_t summ = 0;
    for (uint64_t mv = 2; mv < hbound; mv++) {
      if (checkPrime(mv) == true)
        summ += mv;
    }
    return summ;
}
