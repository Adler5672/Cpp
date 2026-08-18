#include "hell.h"
#include <iostream>

// function that takes a single parameter and does not return any value
void enterClub(unsigned short &age) {
  if (age >= 21) {
    std::cout << "Welcome to the club!\n";
  } else {
    std::cout << "Sorry, you are not old enough to enter.\n";
  }
}

int max(int a, int b) {
  if (a > b) {
    return a;
  } else {
    return b;
  }
}

auto lucky_number() -> int { return 99; }

void say_hello() { std::cout << "Hello there\n"; }

auto increment_multiply(double d, double e) -> double {

  std::cout << "Inside function, before imcrement : \n";
  std::cout << "d : " << d << '\n';
  std::cout << "e : " << e << '\n';

  double results = {(++d) * (++e)};

  std::cout << "Inside function, after imcrement : \n";
  std::cout << "d : " << d << '\n';
  std::cout << "e : " << e << '\n';

  return results;
}

auto max1(int q, int s) -> int;

auto min(int al, int aj) -> int;

auto inc_multi(int sy, int ai) -> int;

void say_age(int age) {
  ++age;
  std::cout << "Hello, you're " << age << " years old! &age " << &age << '\n';
}

void say_age(int *age) {
  ++(*age);
  std::cout << "Hello, you're " << *age << " years old! &age " << static_cast<const void *>(&age)
            << '\n';
}

void say_age1(int &age) {
  ++age;
  std::cout << "Hello, you're " << age << " years old! &age " << &age << '\n';
}

void max_str(const std::string &input1, const std::string &input2, std::string &output) {
  if (input1 > input2) {
    output = input1;
  } else {
    output = input2;
  }
}

void max_int(int input1, int input2, int &output) {
  if (input1 > input2) {
    output = input1;
  } else {
    output = input2;
  }
}

void max_double(double input1, double input2, double *output) {
  if (input1 > input2) {
    *output = input1;
  } else {
    *output = input2;
  }
}

auto sum(int a, int b) -> int {
  int result = a + b;
  std::cout << "addres" << &result << '\n';
  return result;
}

auto add_strings(const std::string &str1, const std::string &str2) -> std::string {
  std::string result = str1 + str2;
  std::cout << "adresss str" << &result << '\n';
  return result;
}

auto max2(int a, int b) -> int { return (a > b) ? a : b; }

auto max2(double a, double b) -> double { return (a > b) ? a : b; }

template <typename T> consteval auto maximum(const T a, const T b) { return (a > b) ? a : b; }

template <typename T> constexpr auto maximal(const T &a, const T &b) -> T { return (a > b) ? a : b; }

template <typename T> consteval auto maxi(const T& a, const T& b) -> T { return (a > b) ? a : b; }

template<> auto maxi<const char*>(const char* const& a, const char* const& b) -> const char* {
  return (std::strcmp(a, b) > 0) ? a : b;
}

auto main() -> int {
  // enterClub(21);
  // enterClub(age);

  for (unsigned short i{1}; 20 > i; ++i) {
    enterClub(i);
  }

  uint16_t x{44};
  uint16_t y{22};

  int result = max(100, 20);
  result = max(x, y);
  std::cout << result << '\n';

  say_hello();

  result = lucky_number();
  std::cout << result << '\n';

  double h(3.00);
  double i(4.00);
  std::cout << "Outside function, before imcrement : \n";
  std::cout << "h : " << h << '\n';
  std::cout << "i : " << i << '\n';

  double incr_multi_result = increment_multiply(h, i);

  std::cout << "Outside function, after imcrement : \n";

  std::cout << "h : " << h << '\n';
  std::cout << "i : " << i << '\n';
  std::cout << &incr_multi_result << '\n';
  int sisks = max1(1292, 202020);
  std::cout << sisks << '\n';

  std::cout << "min : " << min(29, 1919) << '\n';
  std::cout << inc_multi(10, 29) << '\n';
  std::cout << maxFromHell(910, 29292) << '\n';
  std::cout << minFromHell(030202, 19) << '\n';

  int age{21};
  std::cout << "age before call : " << age << " & age " << &age << '\n';
  say_age(age);
  std::cout << "age after call : " << age << " & age " << &age << '\n';
  say_age(&age);
  say_age1(age);
  std::string out_str;
  std::string string1{"Alabama"};
  std::string string2{"Bellevue"};
  max_str(string1, string2, out_str);
  std::cout << out_str << '\n';
  int out_int;
  int in1{45};
  int in2{23};
  max_int(in1, in2, out_int);
  std::cout << out_int << '\n';
  double out_double;
  double int_double1{45.8};
  double int_double2{6.9};
  max_double(int_double1, int_double2, &out_double);
  std::cout << out_double << '\n';
  int xx{5};
  int yy{9};
  int results = sum(xx, yy);
  std::cout << "addreesss" << &results << '\n';
  std::cout << results << '\n';
  std::string in_str1{"Hello"};
  std::string in_str2{" World"};
  std::string result_str = add_strings(in_str1, in_str2);
  std::cout << "Adreeesssseab str" << &result_str << '\n';
  std::cout << result_str << '\n';
  auto results2 = max2(2.6, 19.7);
  auto func = []() { std::cout << "Wjsjsjsj\n"; };
  func();
  []() { std::cout << "wuwuwiwjs\n"; }();
  [](double a, double b) { std::cout << "a + b : " << (a + b) << '\n'; }(10.0, 5.0);
  auto fumc = [](double ab, double ba) { std::cout << "a + b : " << (ab + ba) << '\n'; };

  fumc(19.28, 16.918);

  auto sjsjs = [](double a, double b) { return a + b; }(10, 20);

  std::cout << sjsjs << '\n';

  std::cout << [](double a, double b) { return a + b; }(28, 9) << '\n';

  auto wuwuwj = [](double a, double b) { return a + b; };

  auto rejejs = wuwuwj(29, 29);
  auto aoaoa = wuwuwj(1010, 191);

  std::cout << rejejs << aoaoa << wuwuwj(181818, 29292) << '\n';

  auto func3 = [](double a, double b) -> double { return a + b; };
  auto ejejs = func3(28, 19);
  std::cout << ejejs << '\n';

  // capture by value
  double x1{10};
  double y1{20};

  auto func4 = [x1, y1]() { std::cout << "x1 + y1 : " << (x1 + y1) << '\n'; };
  func4();

  int c{42};
  auto func5 = [c]() { std::cout << "inner value " << c << " &c : " << &c << '\n'; };

  for (size_t i{}; i < 5; ++i) {
    std::cout << "outer value " << c << " &c : " << &c << '\n';
    func5();
    ++c;
  }

  // capture by reference
  int d{42};
  auto func6 = [&d]() { std::cout << "inner value " << d << " &d : " << &d << '\n'; };

  for (size_t i{}; i < 5; ++i) {
    std::cout << "outer value " << d << " &d : " << &d << '\n';
    func6();
    ++d;
  }

  // capturing all by value
  auto func7 = [=]() { std::cout << c << d << '\n'; };

  for (size_t i{}; i < 5; ++i) {
    std::cout << c << d << '\n';
    func7();
    ++c;
    ++d;
  }

  // capturing all by refernce
  auto func8 = [&]() { std::cout << c << d << '\n'; };

  for (size_t i{}; i < 5; ++i) {
    std::cout << c << d << '\n';
    func8();
    ++c;
    ++d;
  }

  int ejwjsj = maximum(181919, 191919);
  std::cout << ejwjsj << '\n';

  auto akakaka = maximum<double>(29.190, 191919191);
  std::cout << akakaka << '\n';

  std::cout << maximal(c, d) << '\n';

  const char* g{"wild"};
  const char* s{"animal"};

  std::cout << "Max : " << maxi(g,s) << '\n';

  return 0;
}

auto max1(int q, int s) -> int {
  if (q > s) {
    return q;
  } else {
    return s;
  }
}

auto min(int al, int aj) -> int {
  if (al < aj) {
    return al;
  } else {
    return aj;
  }
}

auto inc_multi(int sy, int ai) -> int { return ((++sy) * (++ai)); }