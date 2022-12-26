#include "prime_number_test.hpp"

#include <iostream>
//#include <random>
//#include <tuple>

namespace prime_test {

bool naive_test(const std::int64_t number_to_test) {
  if (number_to_test % 2 == 0) {
    std::cout << number_to_test << " can be written as product of " << 2
              << " and " << number_to_test / 2 << '\n';
    return false;
  }

  for (std::int64_t i{number_to_test / 2}; 2 < i; --i) {

    for (std::int64_t j{2}; j < i; ++j) {

      if (number_to_test < i * j) {
        break;
      } else if (i * j == number_to_test) {
        std::cout << number_to_test << " can be written as product of " << i
                  << " and " << j << '\n';

        return false;
      }
    }
  }

  return true;
}

#if 0
static bool miller_rabin_test(const std::int64_t number_to_test) {
  if (number_to_test % 2 == 0) {
    return false;
  }

  std::mt19937_64 mt{std::random_device{}()};
  std::uniform_int_distribution<> a{1, static_cast<int>(number_to_test)};

  return false;
}

std::tuple<std::int64_t> get_numbers_factors(const std::int64_t number) {}
#endif
} // namespace prime_test