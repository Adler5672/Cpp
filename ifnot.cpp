#include <iostream>

int getMax(int num1, int num2, int num3) {
  int result;

  if (num1 >= num2 && num3) {
    result = num1;
  } else if (num2 >= num1 && num2 >= num3) {
    result = num2;
  } else {
    result = num3;
  }
  return result;
}

int main(int argc, char *argv[]) {
  // js
  std::cout << getMax(18, 75, 28);
  std::cout << "\n";
  return 0;
}
