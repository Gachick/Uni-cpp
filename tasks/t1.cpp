#include <iostream>
#include <vector>

int main() {
  int n = 0;
  std::cin >> n;
  std::vector<int> fibs{1, 1};
  for (int i = 2; i < n; ++i) {
    fibs.push_back(fibs.at(i - 2) + fibs.at(i - 1));
  }
  std::cout << fibs.at(n - 1);
  return 0;
}
