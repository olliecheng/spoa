//
// Created by Ollie Cheng on 29/12/2024.
//

#include "spoa/utils.hpp"

#include <algorithm>

qual combineQuality(const qual a, const qual b) {
  return std::max(a, b);
}
