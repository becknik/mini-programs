#include "main.hpp"
#include "prime_number_test.hpp"

#include <cstdint>
#include <numeric>

int main() {

  std::int64_t user_input{};
  bool user_input_satisfied{0};

  while (!user_input_satisfied) {
    std::cout << "Enter an integer in naturals for prime number checking: ";
    std::cin >> user_input;

    user_input_satisfied = input::is_valid(user_input);
  }

  if (prime_test::naive_test(user_input)) {
    std::cout << user_input << " is a prime number!\n";
  } else {
    std::cout << user_input << " is not a prime number...\n";
  }

  return 0;
}

namespace input {
bool is_valid(const std::int64_t user_input) {
  using std::cerr;
  using std::cin;
  using std::cout;

  // If input is not an integer...
  if (cin.fail()) {
    cin.clear();
    input::cin_ignore_further_input();
    cerr << "Error: Wrong input type...\n";
    return false;

  } else {
    input::cin_ignore_further_input();

    // Primes are defined \in \mathbb{N}
    if (user_input < 1) {
      std::cerr << "The entered number is less qual 0 & therefore not valid.\n";
      return false;
    }
    cout << "Proceeding with your input: " << user_input << "...\n";
    return true;
  }
}

void cin_ignore_further_input() {
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}
} // namespace input