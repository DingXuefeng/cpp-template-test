/*****************************************************************************/
// Author: Xuefeng Ding <xuefengd@princeton.edu>
// Insitute: Department of Physics, Princeton University
// Date: 2/12/22
// Version: v1.0
// Description: GooStats, a statistical analysis toolkit that runs on GPU.
//
// All rights reserved. 2022 copyrighted.
/*****************************************************************************/
#include "main.h"
#include <iostream>
#include <regex>
void A::set(const std::string &key, const std::string &v) { m_data[key] = v; }
template<typename T>
T convert(const std::string &v) {
  static_assert(std::is_same<T, double>::value ||
                        std::is_same<T, std::string>::value,
                "Only std::string and double are allowed");
  return v;
}

template<>
double convert(const std::string &v) { return std::stod(v); }

template<typename T>
T A::get(const std::string &key) const {
  if (m_data.find(key) != m_data.end()) {
    return convert<T>(m_data.at(key));
  } else {
    return T();
  }
}

int main(int argc, char **argv) {
  A a;
  a.set("a", "93");
  a.set("b", "abc");
  std::cout << a.get("a") << " " << a.get("b") << " " << a.get<double>("a")
            << std::endl;

  std::regex trailing("(^\\s+|\\s+$)");
  std::string target{" A "};
  std::cout << "<" << std::regex_replace(target, trailing, {}) << ">" << std::endl;
  //  std::cout << a.get<int>("a") << std::endl;
  return 0;
}