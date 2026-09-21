#include "animals/cat.h"
#include "animals/crow.h"
#include "animals/dog.h"
#include "animals/pigeon.h"
#include "family/child.h"
#include "misc/derived.hpp"
#include "misc/stream_insertable.hpp"
#include "persons/civilengineer.h"
#include "persons/engineer.h"
#include "persons/nurse.h"
#include "persons/player.h"
#include "shapes/circle.h"
#include "shapes/cylinder.h"
#include "shapes/oval.h"
#include <memory>
#include <print>
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

class Point : public StreamInsertable {
public:
  Point() = delete;
  Point(const Point &) = delete;
  Point(Point &&) = delete;
  auto operator=(const Point &) -> Point & = delete;
  auto operator=(Point &&) -> Point & = delete;
  // NOLINTNEXTLINE(bugprone-easily-swappable-parameters)
  Point(double x, double y) : x(x), y(y) {}

  [[nodiscard]] auto format() const -> std::string override {
    return std::format("Point({}, {})", x, y);
  }

private:
  double x;
  double y;
};
void someone() { Dog ak("wusjw", "wiwiw", 10); }
auto draw_shape(const Shape &shape) -> void { shape.draw(); }
auto draw_shape(Shape *shape) -> void { shape->draw(); }
auto main() -> int {
  Cylinder cylinder1(10, 3); // Create an object of Cylinder class
  std::println("{}", cylinder1.volume());
  std::println("{}", cylinder1.get_base_radius());
  std::println("{}", cylinder1.get_height());

  // Change member value
  // cylinder1.base_radius = 100;
  // cylinder1.height = 3;
  cylinder1.set_base_radius(100);
  cylinder1.set_height(3);
  std::println("{}", cylinder1.volume());

  // Manage a stack object through a pointer  j
  Cylinder *p_cylinder1 = &cylinder1;
  std::println("volume : {}", p_cylinder1->volume());
  // Create a cylinder heap object yhrough the new operator
  auto *cylinder2 = new Cylinder(10, 3); // heap
  std::println("{}", cylinder2->volume());
  std::println("base rsdius {}", cylinder2->get_base_radius());
  delete cylinder2; // Don't forget to free the allocated memory
  cylinder2 = nullptr;

  bool aoaoao = true;
  Dog myDog("Arkhan", "Pejaten", 16);
  std::println("More? Yes or no");
  if (aoaoao == true) {
    someone();
  } else {
    return 127;
  }
  myDog.set_name("someone");
  myDog.set_breed("Golden Retriever");
  myDog.set_age(5);

  std::println("Dog's name: {}", myDog.get_name());
  std::println("Dog's breed: {}", myDog.get_breed());
  std::println("Dog's age: {}", myDog.get_age());

  // Pointer
  // myDog.set_name("sjsjsis")->set_breed("wjwiwiww")->set_age(20);
  myDog.set_name("wjwiw").set_breed("whajaja").set_age(19);
  std::println("Dog's name: {}", myDog.get_name());
  std::println("Dog's breed: {}", myDog.get_breed());
  std::println("Dog's age: {}", myDog.get_age());

  Cat cat1;
  cat1.m_name = "yusuf";
  std::println("{}", cat1.m_name);
  std::println("{}", sizeof(myDog));

  Player player1("Chess", "wh", "wu", 20);
  player1.set_first_name("Gilang");
  player1.set_last_name("Travis");
  player1.set_age(10);

  player1.print();
  Person person1("skska", "sjwja", 10, "whwu", 2);
  person1.print();
  // player1.p_age error

  std::println("----------");

  Nurse nurse;
  // nurse.first_name = "fi";

  Engineer engineer;
  civilEngineer cv1("fi", "wi", 10, "wh", 2, 10, "civil");
  cv1.print();
  const civilEngineer &cv2(cv1); // Test copy constructor
  cv2.print();

  Child child1(10);
  child1.print_var();
  child1.show_value();
  /*Shape shape1("Shape 1");
  shape1.draw();*/
  Oval oval1(5, 10, "Oval 1");
  oval1.draw();
  Circle circle1(7, "Circle 1");
  circle1.draw();

  //  Base class pointer to derived class object
  /* Shape *shape_ptr = &shape1;
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
  std::println("Size of Shape: {}", sizeof(Shape));
  std::println("Size of Oval: {}", sizeof(Oval));
  std::println("Size of Circle: {}", sizeof(Circle));

  // Slicing
  // Shape shape2 = oval1; // Slicing occurs here
  // shape2.draw();        // Calls Shape's draw(), not Oval's draw()

  std::vector<std::shared_ptr<Shape>> shape3;
  shape3.push_back(std::make_shared<Shape>(circle1));
  shape3.push_back(std::make_shared<Shape>(oval1));
  shape3.push_back(std::make_shared<Shape>(shape1));


  for (auto &s : shape3) {
    s->draw();
  }
  shape3[0]->draw(44); // Calls Shape's draw() with color depth
  shape3.clear();      // Clear the vector, which will automatically delete the
                      // shared_ptrs and free memory
  */
  Dog dog1("Buddy", "Golden Retriever", 5);
  Cat cat2("Short Hair", "Whiskers");
  Pigeon pigeon1("Gray", "City Pigeon");
  Crow crow1("Black", "Common Crow");
  std::vector<Animal *> animals;
  animals.push_back(&dog1);
  animals.push_back(&cat2);
  animals.push_back(&pigeon1);
  animals.push_back(&crow1);

  for (const auto *animal : animals) {
    animal->breathe();
  }

  animals.clear();
  // Feline polymorphism
  Dog dog2("Do eyee", "Drop", 20);
  Cat cat3("divi", "duties");
  Pigeon pigeon2("dototint", "ditto");
  std::vector<Feline *> felines;
  felines.push_back(&dog2);
  felines.push_back(&cat3);
  for (const auto &feline : felines) {
    feline->run();
  }
  felines.clear();

  std::println("{:-<20}", "");
  // Bird polymorphism
  Pigeon pigeon3("dototint", "ditto");
  Crow crow2("black", "crows");
  std::vector<Bird *> birds;
  birds.push_back(&pigeon2);
  birds.push_back(&crow2);
  for (const auto &bird : birds) {
    bird->fly();
  }
  birds.clear();
  /*Shape shape4("Shape 4");
  std::println("Count of shapes: {}", Shape::count);

  Shape shape5("Shape 5");
  std::println("Count of shapes: {}", Shape::count);

  Shape shape6("Shape 6");
  std::println("Count of shapes: {}", Shape::count);

  std::println("{:*<20}", "");

  Ellipse ellipse1(5, 10, "Ellipse 1");
  std::println("Count of Shapes: {}", Shape::count);
  std::println("Count of Ellipses: {}", Ellipse::count);

  std::array<Shape *, 2> shapess = {&shape4, &ellipse1};
  for (const auto &shape : shapess) {
    std::println("Count of {}", shape->get_count());
  }
 */
  std::unique_ptr<Base> base_ptr = std::make_unique<Derived>();
  double result =
      base_ptr->add(); // Using default parameters from Derived class
  std::println("Result: {}", result);

  std::println("{:-<20}", "");

  // Using reference for polymorphism
  Derived derived_obj;
  Base &base_ref = derived_obj; // Reference to Derived object as Base
  double result_ref =
      base_ref.add(); // Calls Derived::add() with default parameters
  std::println("Result from reference: {}", result_ref);

  std::println("{:-<20}", "");

  // Raw objects
  Base base_obj;
  double result2 = base_obj.add(); // Calls Base::add() with default parameters
  std::println("Result from raw object: {}", result2);

  std::println("{:-<20}", "");

  // Derived object
  Derived derived_obj2;
  double result3 =
      derived_obj2.add(); // Calls Derived::add() with default parameters
  std::println("Result from derived object: {}", result3);

  std::println("{:-<20}", "");

  // Slice with raw objects
  const Base &base_obj2 = derived_obj2; // Slicing occurs here
  double result4 = base_obj2.add(); // Calls Base::add() with default parameters
  std::println("Result from sliced object: {}", result4);

  std::unique_ptr<Animal> animal_ptr =
      std::make_unique<Feline>("Short Hair", "Whiskers");
  std::println("{:-<20}", "");
  std::unique_ptr<Feline> feline_ptr(
      dynamic_cast<Feline *>(animal_ptr.release()));
  feline_ptr ? feline_ptr->do_something()
             : std::println("Failed to cast Animal to Feline");
  // By reference
  Feline feline_obj("Long Hair", "Fluffy");
  Animal &animal_ref = feline_obj; // Reference to Feline object as Animal
  auto &feline_ref = dynamic_cast<Feline &>(animal_ref);
  feline_ref.do_something();

  std::println("{:-<20}", "");
  const std::unique_ptr<Shape> shape_ptr =
      std::make_unique<Circle>(5.0, "My Circle");
  shape_ptr->draw();
  std::println("Surface area: {}", shape_ptr->surface_area());

  std::println("{:-<20}", "");
  Point point(3.0, 4.0);
  std::println("point: {}", point.format());

  std::array<std::unique_ptr<Animal>, 4> animal_array;
  animal_array[0] = std::make_unique<Dog>("Buddy", "Golden Retriever", 5);
  animal_array[1] = std::make_unique<Cat>("Short Hair", "Whiskers");
  animal_array[2] = std::make_unique<Pigeon>("Gray", "City Pigeon");
  animal_array[3] = std::make_unique<Crow>("Black", "Common Crow");
  for (const auto& s : animal_array) {
    std::println("Animal: {}", s->format());
  }
  return 0;
}
