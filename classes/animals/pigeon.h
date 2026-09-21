#include "bird.h"

class Pigeon : public Bird {
public:
  Pigeon() = default;
  Pigeon(const Pigeon &) = delete;
  Pigeon(Pigeon &&) = delete;
  auto operator=(const Pigeon &) -> Pigeon & = delete;
  auto operator=(Pigeon &&) -> Pigeon & = delete;
  Pigeon(std::string_view wing_color, std::string_view description);
  ~Pigeon() override = default;

  virtual auto coo() const -> void;
  auto breathe() const -> void override;
  auto fly() const -> void override;
  [[nodiscard]] auto format() const -> std::string override;
};
