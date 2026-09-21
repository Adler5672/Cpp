#pragma once
#include <string>
#include "../misc/stream_insertable.hpp"

class Animal : public StreamInsertable {
public:
  Animal() = default;
  Animal(const Animal &) = delete;
  Animal(Animal &&) = delete;
  auto operator=(const Animal &) -> Animal & = delete;
  auto operator=(Animal &&) -> Animal & = delete;
  Animal(std::string_view description);
  virtual ~Animal() = default;

  virtual auto breathe() const -> void;

  [[nodiscard]] auto format() const -> std::string override;
protected:
  std::string description;
};
