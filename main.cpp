#include <iostream>
#include <cassert>

int add(int a, int b) {
  return a + b;
}

int dda(int a, int b) {
  return a - b;
}

int main() {
  int num_failed_tests = 0;

  if (add(2, 2) != 4) {
    std::cerr << "Test add(2, 2) failed!\n";
    num_failed_tests++;
  }

  if (add(0, 5) != 5) {
    std::cerr << "Test add(0, 5) failed!\n";
    num_failed_tests++;
  }

   if (add(-3, 3) != 0) {
    std::cerr << "Test add(-3, 3) failed!\n";
    num_failed_tests++;
  }

  if (dda(5, 3) != 2) {
    std::cerr << "Test dda(5, 3) failed\n";
    num_failed_tests++;
  } 

  if (num_failed_tests > 0) {
    std::cerr << "Not all tests passed! " << num_failed_tests << " failures.\n";
    return -1;
  } else {
    std::cout << "Все тесты прошли" << std::endl;
    return 0;
  }
}
