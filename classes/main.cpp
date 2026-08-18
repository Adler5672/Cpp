#include "cat.h"
#include "civilengineer.h"
#include "cylinder.h"
#include "dog.h"
#include "engineer.h"
#include "player.h"
#include "nurse.h"
#include <iomanip>
#include <iostream>
/*
class Cylinder {
  public:
    double base_radius{};
    double height{};
    auto volume() -> double{
      return PI * base_radius * base_radius * height;
    }
};
*/

void someone() { Dog ak("wusjw", "wiwiw", 10); }

auto main() -> int {
  Cylinder cylinder1(10, 3); // Create an object of Cylinder class
  std::cout << cylinder1.volume() << '\n';
  std::cout << cylinder1.get_base_radius() << '\n';
  std::cout << cylinder1.get_height() << '\n';

  // Change member value
  // cylinder1.base_radius = 100;
  // cylinder1.height = 3;
  cylinder1.set_base_radius(100);
  cylinder1.set_height(3);
  std::cout << cylinder1.volume() << '\n';

  // Manage a stack object through a pointer  j
  Cylinder *p_cylinder1 = &cylinder1;
  std::cout << "volume : " << p_cylinder1->volume() << '\n';
  // Create a cylinder heap object yhrough the new operator
  auto *cylinder2 = new Cylinder(10, 3); // heap
  std::cout << cylinder2->volume() << '\n';
  std::cout << "base rsdius " << cylinder2->get_base_radius() << '\n';
  delete cylinder2; // Don't forget to free the allocated memory
  cylinder2 = nullptr;

  bool aoaoao = true;
  Dog myDog("Arkhan", "Pejaten", 16);
  std::cout << "More? Yes or no" << '\n';
  if (aoaoao == true) {
    someone();
  } else {
    return 127;
  }
  myDog.set_name("someone");
  myDog.set_breed("Golden Retriever");
  myDog.set_age(5);

  std::cout << "Dog's name: " << myDog.get_name() << '\n';
  std::cout << "Dog's breed: " << myDog.get_breed() << '\n';
  std::cout << "Dog's age: " << myDog.get_age() << '\n';

  // Pointer
  // myDog.set_name("sjsjsis")->set_breed("wjwiwiww")->set_age(20);
  myDog.set_name("wjwiw").set_breed("whajaja").set_age(19);
  std::cout << "Dog's name: " << myDog.get_name() << '\n';
  std::cout << "Dog's breed: " << myDog.get_breed() << '\n';
  std::cout << "Dog's age: " << myDog.get_age() << '\n';

  cat cat1;
  cat1.m_name = "yusuf";
  std::cout << cat1.m_name << '\n';
  std::cout << sizeof(myDog) << '\n';

  Player player1("Chess", "wh", "wu", 20);
  player1.set_first_name("Gilang");
  player1.set_last_name("Travis");
  player1.set_age(10);

  std::cout << player1 << '\n';
  Person person1("skska", "sjwja", 10, "whwu", 2);
  std::cout << person1 << '\n';
  // player1.p_age error

  std::cout << std::setfill('-') << std::setw(10) << '\n';

  Nurse nurse;
  //nurse.first_name = "fi";

  Engineer engineer;
  civilEngineer cv1;

  return 0;
}
