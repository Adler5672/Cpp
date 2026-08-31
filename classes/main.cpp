#include "cat.h"
#include "circle.h"
#include "civilengineer.h"
#include "cylinder.h"
#include "dog.h"
#include "engineer.h"
#include "nurse.h"
#include "child.h"
#include "oval.h"
#include "player.h"
#include <iomanip>
#include <iostream>
#include <memory>
#include <vector>
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
auto draw_shape(const Shape &shape) -> void { shape.draw(); }
auto draw_shape(Shape *shape) -> void { shape->draw(); }
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
  // nurse.first_name = "fi";

  Engineer engineer;
  civilEngineer cv1("fi", "wi", 10, "wh", 2, 10, "civil");
  std::cout << cv1 << '\n';
  const civilEngineer &cv2(cv1); // Test copy constructor
  std::cout << cv2 << '\n';

  Child child1(10);
  child1.print_var();
  child1.show_value();
  Shape shape1("Shape 1");
  shape1.draw();
  Oval oval1(5, 10, "Oval 1");
  oval1.draw();
  Circle circle1(7, "Circle 1");
  circle1.draw();


  //  Base class pointer to derived class object
  Shape *shape_ptr = &shape1;
  shape_ptr->draw(); // Calls Shape's draw()
  shape_ptr = &oval1;
  shape_ptr->draw(); // Calls Oval's draw()
  shape_ptr = &circle1;
  shape_ptr->draw(); // Calls Circle's draw()

  // Base class reference to derived class object
  Shape &shape_ref = shape1;
  shape_ref.draw(); // Calls Shape's draw()
  Shape &oval_ref = oval1;
  oval_ref.draw(); // Calls Oval's draw()
  Shape &circle_ref = circle1;
  circle_ref.draw(); // Calls Circle's draw()
  draw_shape(shape1);
  draw_shape(oval1);
  draw_shape(circle1);

  std::vector<Shape *> shapes;
  shapes.push_back(&shape1);
  shapes.push_back(&oval1);
  shapes.push_back(&circle1);
  for (const auto &shape : shapes) {
    shape->draw();
  }

  // Comparing size of objects
  std::cout << "Size of Shape: " << sizeof(Shape) << '\n'; // Size of Shape: 32
  std::cout << "Size of Oval: " << sizeof(Oval) << '\n'; // Size of Oval: 48
  std::cout << "Size of Circle: " << sizeof(Circle) << '\n'; // Size of Circle: 48

  // Slicing
  Shape shape2 = oval1; // Slicing occurs here
  shape2.draw(); // Calls Shape's draw(), not Oval's draw()

  std::vector<std::shared_ptr<Shape>> shape3;
  shape3.push_back(std::make_shared<Shape>(circle1));
  shape3.push_back(std::make_shared<Shape>(oval1));
  shape3.push_back(std::make_shared<Shape>(shape1));

  for (auto &s : shape3) {
    s->draw();
  }
  return 0;
}
