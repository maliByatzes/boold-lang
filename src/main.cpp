#include "boold/tmp.hpp"
#include <iostream>

int main() {
  int result{};
  result = tmp::add(1, 3);
  std::cout << "Result: " << result << '\n';

  return 0;
}
