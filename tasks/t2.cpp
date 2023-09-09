#include <iostream>
#include <string>

int main() {
  std::string num = "";
  std::cin >> num;
  for (int i = num.length() - 1; i >= 0; --i) {
    std::cout << num.at(i);
  }
  return 0;
}
