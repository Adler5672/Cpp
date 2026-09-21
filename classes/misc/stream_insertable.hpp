#pragma once
#include <string>

class StreamInsertable {
  StreamInsertable(const StreamInsertable &) = default;
  StreamInsertable(StreamInsertable &&) = default;
  auto operator=(const StreamInsertable &) -> StreamInsertable & = default;
  auto operator=(StreamInsertable &&) -> StreamInsertable & = default;

public:
  StreamInsertable() = default;
  virtual ~StreamInsertable() = default;
  [[nodiscard]] virtual auto format() const -> std::string = 0;
};
