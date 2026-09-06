#pragma once
#ifndef PLAYER_H
#define PLAYER_H

#include "person.h"
#include <string>

class Player : public Person {
public:
  Player() = default;
  Player(std::string_view game_param, std::string_view first_name_param,
         std::string_view last_name_param, int age_param);

  ~Player();
  auto print() const -> void;

  // See the acces we have to inhereted members from Person
  auto play() -> void {
    first_name = "Gus";
    *p_age = 69;
    // sks = 6;  // error
  }

private:
  std::string m_game{"none"};
  // uint8_t health{0};
  //  double salary{0.0};
};

#endif // PLAYER_H
