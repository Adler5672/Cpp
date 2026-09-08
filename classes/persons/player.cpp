#include "player.h"
#include <print>
Player::Player(std::string_view game_param, std::string_view first_name_param,
               std::string_view last_name_param, int age_param) {
  m_game = game_param;
  first_name = first_name_param;
  last_name = last_name_param;
  p_age = new int;
  *p_age = age_param;
};

Player::~Player() = default;

auto Player::print() const -> void {
  std::println("Game: {}", m_game);
  std::println("First Name: {}", get_first_name());
  std::println("Last Name: {}", get_last_name());
  std::println("Age: {}", get_age());
  std::println("Secrrt{}", secret);
}
auto Player::play() -> void {
  first_name = "Gus";
  *p_age = 69;
  // sks = 6;  // error
}
