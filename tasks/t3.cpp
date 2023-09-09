#include <cmath>
#include <iostream>

bool test_prime(int n) {
  for (int i = 2; i < sqrt(n) + 1; ++i) {
    if (n % i == 0) {
      return false;
    }
  }
  return true;
}

int main() {
  int n = 0;
  std::cin >> n;
  std::cout << (test_prime(n) ? "Prime" : "Not prime");
  return 0;
}
