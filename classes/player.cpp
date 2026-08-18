#include "player.h"
Player::Player(std::string_view game_param, std::string_view first_name_param,
               std::string_view last_name_param, int age_param) {
  m_game = game_param;
  first_name = first_name_param;
  last_name = last_name_param;
  p_age = new int;
  *p_age = age_param;
};

Player::~Player() = default;

auto operator<<(std::ostream &os, const Player &player) -> std::ostream & {
  os << "Game: " << player.m_game << "\n";
  os << "First Name: " << player.get_first_name() << '\n';
  os << "Last Name: " << player.get_last_name() << '\n';
  os << "Age: " << player.get_age() << '\n';
  os << "Secrrt" << player.secret << '\n';
  return os;
}
