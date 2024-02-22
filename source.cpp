#include <iostream>
#include <sstream>
#include <string>

template <typename T> T parse_string(const std::string &str) noexcept {
  T val;
  std::stringstream stream;
  stream << str;
  stream >> val;
  return val;
}

int main(int args, char *argv[]) {
  const size_t x = parse_string<size_t>("256");
  const float y = parse_string<float>("4.567");
  const std::string z = parse_string<std::string>("hello world");

  std::cout << "x: " << x << std::endl
            << "y: " << y << std::endl
            << "z: " << z << std::endl;

  return 0;
}
